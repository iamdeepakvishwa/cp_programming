#include<bits/stdc++.h>

using namespace std;

int main(){
    int x,flag=0,i,j;
    cin>>x;
    int a[x],b[x];
    for(i=0;i<x;i++){
        cin>>a[i]>>b[i];
    }
    for(i=0;i<x;i++){
        for(j=0;j<x;j++){
            if(i==j){

            }
            else{
                if(a[i]==b[j]){
                    flag+=1;
                }
            }
        }
    }
    cout<<flag<<endl;

}
