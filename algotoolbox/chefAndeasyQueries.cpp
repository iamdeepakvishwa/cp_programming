#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin>>T;
	// cin.ignore(); must be there when using getline(cin, s)
	while(T--)
	{
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(ll i =0;i<n;i++)cin>>arr[i];
        ll f=0,res= 0;
        for(ll i=0;i<n;i++){
            if(arr[i] < k){
                res = i+1;
                f = 1;
                break;
            }
            arr[i+1] += (arr[i]- k);
        }
        if(f){
            cout<<res<<endl;
        }else{
            res = n + (arr[n-1]/k);
            cout<<res<<endl;
        }
	}
	return 0;
}
