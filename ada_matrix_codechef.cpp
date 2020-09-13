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
	int T;
	cin>>T;
	// cin.ignore(); must be there when using getline(cin, s)
	while(T--){
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        int start = n-1,count =0;
        while(start >=0){
            if(arr[0][start] != start+1){
                for(int i=0;i<n;i++){
                    for(int j=i+1;j<n;j++){
                        swap(arr[i][j],arr[j][i]);
                    }
                }
                count++;
            }
            start--;
        }
        cout<<count<<endl;
	}
	return 0;
}
