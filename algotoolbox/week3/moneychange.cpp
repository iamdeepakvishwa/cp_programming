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
int get_change(int m) {
    int coins[] = {10, 5, 1};
    int count = 0;
    for (int i = 0; m > 0; i++) {
        count += m / coins[i];
        m %= coins[i];
    }
    return count;
}

int main() {
    int m;
    cin >> m;
    cout << get_change(m) << '\n';
}
