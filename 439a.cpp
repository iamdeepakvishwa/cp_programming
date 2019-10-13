#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,d,i;
    cin>>n>>d;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int total_time = 10*(n-1),sum=0;
    for(i=0;i<n;i++){
        total_time = total_time + arr[i] ;
        sum = sum +arr[i];
    }
    if(total_time>d){
        cout<<-1<<endl;
    }
    else{
        cout<<(d-sum)/5<<endl;
    }
}
