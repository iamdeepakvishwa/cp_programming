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
        int n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        unordered_map<int , int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto i: mp){
            cout<<i.first<<" "<<i.second<<endl;
        }
	}
	return 0;
}