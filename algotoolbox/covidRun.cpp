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
        ll n,k,x,y;
        cin>>n>>>k>>x>>y;
        ll count[n] = {0};
        ll f = 0;
        while(1){
            if(count[x]){
                f= 1;
                break;
            }
            count[x]++;
            x = (x+k)%n;
            if(count[y]){
                f=2;
                break;
            }
        }
        if(f == 0 && k==n){
            if(x==y){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        else if(f==2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
