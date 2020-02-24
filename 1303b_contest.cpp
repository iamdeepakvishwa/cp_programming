#include<bits/stdc++.h>
using namespace std;

long long int compute(long long int n , long long int g , long long int b){
    if(g>n){
        return n;
    }
    long long int good_quality;
    if(n%2==0){
        good_quality = ceil(n/2);

    }else{
        good_quality = ceil(n/2)+1;
    }

    //cout<<endl<<"good_quality: "<<good_quality<<endl;
    long long int result_day = 0, result_work =0;
    if(good_quality<g){
        return g;
    }
    result_day = ((g+b)/g)*good_quality;
    return result_day-b;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,g,b;
        cin>>n>>g>>b;
        long long int result = compute(n,g,b);
        cout<<result<<endl;
    }
}
