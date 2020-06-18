#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        vector<char> res;
        cin>>str;
        res.push_back(str.at(0));
        for(auto i=1;i<str.length()-1;i=i+2){
            if(str.at(i)==str.at(i+1)){
                res.push_back(str.at(i));
            }
            else{
                res.push_back(str.at(i));
                res.push_back(str.at(i+1));
            }
        }
        res.push_back(str.at(str.length()-1));
        for(int i=0; i < res.size(); i++){
            cout << res.at(i);
        }
        cout<<endl;
    }
}
