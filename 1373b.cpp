#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c=0;
        int n = s.length();
        for(int i=0;i<n;i++){
            for(int j=0;j<(s.length()-1);j++){
                if(s.at(j)!=s[j+1]){
                    s.erase(s.begin() + j);
                    s.erase(s.begin() + j);
                    c+=1;
                    break;
                }
            }
            if(s.length()<2){
                break;
            }
        }
        if(c%2!=0){
            cout<<"DA"<<endl;
        }
        else{
            cout<<"NET"<<endl;
        }
    }
}
