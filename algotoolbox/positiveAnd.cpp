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
        ll n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
        }
        else if(n== 3){
            cout<<"2 3 1"<<endl;
        }
        else if(ceil(log2(n)) == floor(log2(n))){
            cout<<"-1"<<endl;
        }
        else{
            cout<<"2 3 1";
            for(i=4;i<=n){
                if(ceil(log2(n)) == floor(log2(n))){
                    cout<<i+1<<" "<<i<<" ";
                    i+=2;
                }else{
                    cout<<i<<" ";
                    i++;
                }
            }
        }
	}
	return 0;
}
