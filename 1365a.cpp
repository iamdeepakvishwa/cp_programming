#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,minimum;
        cin>>n>>m;
        set<int> row, coloumn;
        int arr[n][m],a=0,b=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                if(arr[i][j]==1){
                    row.insert(i);
                    coloumn.insert(j);
                }
            }
        }
        minimum = min(n-row.size(),m-coloumn.size());
        if(minimum%2==0){
             cout<<"Vivek"<<endl;
        }
        else{
            cout<<"Ashish"<<endl;
        }
    }
}
