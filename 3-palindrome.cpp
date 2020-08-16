#include<bits/stdc++.h>
#include<string>
using namespace std;

bool checkPalindrome(string inp){
    int len = inp.length();
    if(len==1){
        return true;
    }
    int x=0,y=len-1;
    while(x<y){
        if(inp.at(x) != inp.at(y)){
            return false;
        }
        x++;
        y--;
    }
    return true;
}


int main(){
    string inp;
    getline(cin, inp);
    int n = inp.length();
    for(int i=1;n-2;i++){
        if(checkPalindrome(inp.substr(0,i+1))){
            for(int j=0;j<n-i-2;j++){
                if(checkPalindrome(inp.substr(i+1,j+1))&& checkPalindrome(inp.substr(j+i+2,n-(j+i+2)))){
                    cout<<inp.substr(0,i+1)<<endl<<inp.substr(i+1,j+1)<<endl<<inp.substr(j+i+2,n-(j+i+2))<<endl;
                    return 0;
                }
            }
        }
    }

}
