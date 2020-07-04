#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>c){
            cout<<-1<<" "<<b<<endl;
        }
        else if(a<c && (c/b)>=a){
            cout<<1<<" "<<-1<<endl;
        }
        else if(a<c && (c/b)<a){
            cout<<1<<" "<<b<<endl;
        }
        else{
            cout<<-1<<" "<<b<<endl;
        }
    }
}
