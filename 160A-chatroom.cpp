#include<iostream>
#include<string>
using namespace std;
int main(){
  string s,s1="hello";
  int i =0,j=0,k=0;
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]==s1[j]){
      j+=1;
      k+=1;
    }
  }
  if(k==5){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}
