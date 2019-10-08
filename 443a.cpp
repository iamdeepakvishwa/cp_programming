#include<bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin>>s;
    set <char> v;
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i])){
            v.insert(s[i]);
        }
    }
    cout<<v.size()<<endl;
}
