#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,m,min_steps,i,j=0;
    cin>>n>>m;
    min_steps = (n/2)+(n%2);
    int max_steps = n;
    for(i=min_steps;i<=max_steps;i++){
        if(i%m==0){
            j=1;
            break;
        }
    }
    if(j==1){
        cout<<i<<endl;
    }
    else{
        cout<<-1<<endl;
    }

}
