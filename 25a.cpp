#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,flag =0,flag1=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            flag++;
        }
        else{
            flag1++;
        }
    }
    if(flag<flag1){
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                cout<<i+1<<endl;
                break;
            }
        }
    }
}
