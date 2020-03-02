#include<bits/stdc++.h>
using namespace std;

void TOH(int n,char A, char B , char C){
    if(n==1){
        cout<<"Disk "<<n<<" "<<A<<"->"<<C<<endl;
        return ;
    }
    TOH(n-1,A,C,B);
    cout<<"Disk "<<n<<" "<<A<<"->"<<C<<endl;
    TOH(n-1,B,A,C);
}

int main(){
    TOH(3,'A','B','C');
}
