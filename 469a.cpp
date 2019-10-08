#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p,q;
    cin>>n;
    cin>>p;
    int a[p];
    set<int> s;
    for(int i=0;i<p;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    cin>>q;
    int b[q];
    for(int i=0;i<q;i++){
        cin>>b[i];
        s.insert(b[i]);
    }
    if(s.size()==n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }

}
