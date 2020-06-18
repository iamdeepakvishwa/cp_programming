#include<bits/stdc++.h>
using namespace std;

int value(int a,int b){
    if(a==0 || b==0){
        return 0;
    }
    if(a==b){
        return a/2;
    }
    return (a+b)/3;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<value(a,b)<<endl;
    }
}
