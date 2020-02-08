#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll mmod(ll n,ll mod)
{
    return (n-(n/mod)*mod);
}

pair<ll,ll> compute(ll a,ll b,ll k,ll m){
    pair<ll,ll> ans;
    if(k==1){
        ans = make_pair(a%m,b%m);
        return ans;
    }
    ll c = mmod(mmod((a*a),m)-mmod((b*b),m),m);
    ll d = mmod(2*a*b,m);
    ans = compute(c,d,k/2,m);
    if(k%2){
        ll e = a*(ans.first)-b*(ans.second);
        e=mmod(e,m);
        ll f = a*(ans.second)+b*(ans.first);
        f =mmod(f,m);
        ans = make_pair(e,f);
    }
    return ans;
}
int main(){
    ll a,b,k,m;
    pair<ll,ll> ans;
    int q;
    cin>>q;
    while (q--){
        cin>>a>>b>>k>>m;
        ans = compute(a,b,k,m);
        if(ans.first<0 ){
            ans.first = m-abs(ans.first);
        }
        if(ans.second<0){
            ans.second = m-abs(ans.second);
        }
        cout<<ans.first<<" "<<ans.second;
    }
}
