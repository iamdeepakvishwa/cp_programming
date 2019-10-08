#include<bits/stdc++.h>

using namespace std;
int main(){

  int arr[]= {4,7,44,47,74,77,444,447,747,744,774,777,477};
  int n;
  bool fl = false;
  cin>>n;
  for(int i = 0;i<13;i++){
    if(n%arr[i]==0){
      fl = true;
      break;
    }
  }
  if(fl){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}
