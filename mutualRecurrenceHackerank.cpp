#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll compute_x(int a,int b,int c,int d,ll n){
    if(n==0){
        return 3;
    }
    if(n-a <0 || n-b<0 || n-c <0){
        return 1;
    }
    return (compute_x(n-a,b,c,d,n)+compute_y(a,n-b,c,d,n)+compute_y(a,b,n-c,d,n)+ n*pow(d,n))%1000000007;
}
ll compute_y(int e, int f,int g,int h,int n){
    if(n==0){
        return 3;
    }
    if(n-e <0 || n-f<0 || n-g<0){
        return 1;
    }
    return (compute_y(n-e,f,g,h,n)+compute_x(e,n-f,g,h,n)+compute_x(e,f,n-g,h,n)+n*pow(h,n))%1000000007;
}

int main(){
    int t;
    cin>>t;
    while (t--) {
        /* code */
        int a,b,c,d,e,f,g,h,n;
        cin>>a>>b>>c>>d>>e>>f>>g>>h>>n;
        ll result1 = compute_x(a,b,c,d,n);
        ll result2 = compute_y(e,f,g,h,n);
        cout<<result1<<" "<<result2<<endl;
    }

}
