#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main(){
    int t,x1,y1,x2,y2 ;
    cin>>t;
    while(t--){
        cin>>x1>>y1>>x2>>y2;
        int result = gcd(abs(x2-x1),abs(y2-y1));
        cout<<result-1;
    }
}
