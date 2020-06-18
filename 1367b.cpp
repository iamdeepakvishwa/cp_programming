#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int Odd=0,even=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if((i%2 !=0)  && (a[i]%2 ==0) ){
                Odd+=1;
            }
            if((a[i]%2!=0)&&(i%2==0)){
                even+=1;
            }
        }
        if(Odd==even){
            cout<<Odd<<endl;
        }
        else if(Odd==0 && even==0){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}
