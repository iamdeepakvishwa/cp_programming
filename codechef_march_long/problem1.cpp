#include<bits/stdc++.h>
using namespace std;

int compute(int p[],int f[],int n, int m){
     int res[m];
     for(int i=0;i<m;i++){
         res[i] = 0;
     }
     for(int i=0;i<n;i++){
         res[f[i]-1] += p[i];
     }
     int min=10000;
     for(int i=0;i<m;i++){
         if(res[i]==0){
         }
         else{
             if(res[i]<min){
                 min = res[i];
             }
         }
     }
     return min;
}
int main(){
    // int n = 6;
    // int m = 4;
    // int f[] = {1,2,3,3,2,2};
    // int p[] = {7,3,9,1,1,1};
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int f[n],p[n];
        for(int i=0;i<n;i++){
            cin>>f[i];
        }
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        cout<<compute(p,f,n,m)<<endl;
    }
}
