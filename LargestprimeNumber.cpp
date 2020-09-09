#include<bits/stdc++.h>
using namespace std;


long long int result(long long int n){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));

    for(int i=2;i*i<=n;i++){
        if(prime[i] == true){
            for(int j = i*i ;j<=n;j+=i){
                prime[j] =false;
            }
        }
    }
    for(int i = n;i>=2;i--){
        if(prime[i]){
            return i;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int prime= result(n);
        cout<<prime<<endl;
    }

}
