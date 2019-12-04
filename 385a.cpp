#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,c;
    cin>>n>>c;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count =0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            continue;
        }
        else{
            int count1 = arr[i]-(arr[i+1]+c);
            if(count<count1){
                count = count1;
            }
        }
    }
    cout<<count<<endl;
}
