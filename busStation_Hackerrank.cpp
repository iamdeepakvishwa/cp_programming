#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],sum =0;
    vector<int> b;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum = sum+a[i];
        b.push_back(sum);
    }
    for(int i=1;i<n;i++){
        if((sum%b.at(i))==0){
            if(b.at(i)==1){

            }else{
                cout<<b.at(i)<<" ";
            }
        }
    }
}
