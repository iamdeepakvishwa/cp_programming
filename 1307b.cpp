#include<bits/stdc++.h>
using namespace std;

int compute(int arr[] , int n , int x){
    sort(arr , arr+n);
    int i = n-1;
    vector<int> result;
    while(i>=0){
        if(arr[i] > x ){
            result.push_back(2);
        }
        else{
             if(x%arr[i] == 0){
                 result.push_back((x/arr[i]));
             }
             else{
                 result.push_back((x/arr[i])+1);
             }
         }
        i--;
    }
    sort(result.begin(),result.end());
    return result.at(0);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n , x ;
        cin>>n >> x;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int result = compute(arr, n, x);
        cout<<result<<endl;
    }
}
