#include<bits/stdc++.h>
using namespace std;

int compute(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    vector<pair <int ,int>> v;
    int result = 0,buffer=0;
    for(int i=0;i<n;i++){
        v.push_back(make_pair(arr[i],i+1));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<"Values Getting Sum"<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((v[j].second - v[i].second)==(v[j].first-v[i].first)){
                
            }
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<res[i]<<" "<<endl;
    // }
    return result ;
}

int main(){
    // int n;
    // cin>>n;
    //int arr[n];
    int arr[] = {8,9,26,11,12,29,14};
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    cout<<compute(arr,7)<<endl;

}
