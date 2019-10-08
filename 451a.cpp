#include<bits/stdc++.h>

using namespace std;

int min(int n,int m){
    if(n<m){
        return n;
    }
    else{
        return m;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    n = min(n,m);
    if(n%2==0){
        cout<<"Malvika";
    }
    else{
        cout<<"Akshat";
    }

}
