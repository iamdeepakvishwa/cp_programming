#include<bits/stdc++.h>
using namespace std;

int compute(int a, int b){
    if(a==b){
        return 0;
    }
    if(a>b ){
        int diff = a-b;
        if(diff%2 == 0){
            return 1;
        }
        else{
            return 2;
        }
    }
    if(b>a){
        int diff = b-a ;
        if(diff%2 == 0){
            return 2;
        }
        else{
            return 1;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int result = compute(a,b);
        cout<<result<<endl;
    }

}
