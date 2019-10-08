#include<bits/stdc++.h>

using namespace std;

int main(){
  int a[5][5];
  int i,j,x,y;
  for(i =0;i<5;i++){
    for(j=0;j<5;j++){
      cin>>a[i][j];
      if(a[i][j]==1){
        x=i;
        y=j;
      }
    }
  }
  int z ;
  z = abs(y-2)+abs(x-2);
  cout<<z;
}
