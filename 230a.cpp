#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n,z=0;
    cin>>s>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<n-i-1;j++){
            if(x[j]>x[j+1]){
                int temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
                temp = y[j];
                y[j] = y[j+1];
                y[j+1] = temp;
            }
        }
    }
    for(int i =0;i<n;i++){
        if(s>x[i]){
            s=s+y[i];
        }
        else{
            z=-1;
            break;
        }
    }
    if(z==-1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}
