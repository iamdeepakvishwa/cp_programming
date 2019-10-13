#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int n,m,a,flag,flag1;
    cin>>n>>m>>a;
    flag = n/a;
    flag1 = m/a;

    if(n%a !=0){
        flag++;
    }
    if(m%a!=0){
        flag1++;
    }
    cout<<flag*flag1<<endl;
}
