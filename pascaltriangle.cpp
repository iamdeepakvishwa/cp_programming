#include<bits/stdc++.h>
using namespace std;
#define P 1000000000

int main(){
    long a[1000][1000];
    for(int  i=0;i<1000;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || i==j){
                a[i][j] = 1;
            }
            else{
                a[i][j]=(a[i-1][j-1]%P + a[i-1][j]%P)%P;
            }
        }
    }
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int j=0;j<=n;j++)
            cout<<a[n][j]<<" ";
        cout<<endl;
    }
}
