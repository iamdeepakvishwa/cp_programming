#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k,j;
    for(int i=0;i<n;i++){
        cin>>k>>j;
        if(k!=j){
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
}
