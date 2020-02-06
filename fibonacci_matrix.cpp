#include<bits/stdc++.h>
using namespace std;
int a[2][2] = {{1,1},{1,0}};

void multiply(int a[2][2],int b[2][2]){
  int mul[2][2];
    for (int i = 0; i < 2; i++){
      for (int j = 0; j < 2; j++){
          mul[i][j] = 0;
          for (int k = 0; k < 2; k++)
              mul[i][j] += a[i][k]*b[k][j];
        }
    }
    for (int i=0;i<2;i++)
        for (int j=0;j<2;j++)
            a[i][j] = mul[i][j];
}

void power(int a[2][2],int n){
  int b[2][2] = {{1,1},{1,0}};
  if(n==0 || n==1){
    return ;
  }
  power(a,n/2);
  multiply(a,a);
  if(n%2!=0){
    multiply(a,b);
  }
}

int fibonac(int n){

  if(n==0){
    return 0;
  }
  power(a,n-1);
  return a[0][0];
}

int main(){
  int n;
  cin>>n;
  int k = fibonac(n);
  cout<<endl<<k<<endl;
}
