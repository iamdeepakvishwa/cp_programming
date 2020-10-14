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
        string s;
        int arrl[26];
        int arrr[26];
        mem(arrl,0);
        mem(arrr,0);
        cin>>s;
        int n = s.length();
        for(int i=0;i<(n/2);i++){
            arrl[s[i]-'a']++;
        }
        for(int i= (n+1)/2;i<n;i++){
            arrr[s[i]-'a']++;
        }
        int flag =1;
        for(int i=0;i<26;i++){
            if(arrl[i]!=arrr[i]){
                cout<<"NO"<<endl;
                flag = 0;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
	}
	return 0;
}
