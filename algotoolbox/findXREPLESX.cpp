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

ll index(ll arr[],ll n,ll x,ll p){
    ll min = 1000000000 , res=-1;
    for(int i =0;i<n;i++){
        if(arr[i] == x){
            if(abs(p-i) < min){
                min = abs(p-i);
                res =  i;
            }
        }
    }
    return res;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin>>T;
	// cin.ignore(); must be there when using getline(cin, s)
	while(T--)
	{
        ll n,x,p,k;
        cin>>n>>x>>p>>k;
        ll arr[n];
        for(ll i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        ll rex = index(arr,n,x,p);
        ll count = 0;
        if(rex>=0 && arr[rex] != x ){
            arr[k-1] =x;
            sort(arr,arr+n);
            count++;
        }
        if(arr[p-1] ==x){
            cout<<0+count<<endl;
        }
        else if(p<k && arr[p-1] < x){
            cout<<-1<<endl;
        }
        else if(p>k && arr[p-1]>x){
            cout<<-1<<endl;
        }
        else{
            rex= index(arr,n,x,p)+1;
            cout<<abs(p-rex)+count<<endl;
        }
	}
	return 0;
}
