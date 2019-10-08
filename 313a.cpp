#include<bits/stdc++.h>
using namespace std;

int main(){
    int state,max ,remain;
    cin>>state;
    if(state>0){
        max= state;
    }
    else{
        max = state;
        int value = state;
        remain = state%10;
        state = state /10;
        if(state>max){
            max = state;
        }
        state = value ;
        state = state /100;
        state = (state*10)+remain;
        if(state>max){
            max = state;
        }
    }
    cout<<max;
}
