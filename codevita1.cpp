#include<bits/stdc++.h>
using namespace std ;


void count_k(int arr[], int& c_0, int& c_1, int& c_2,int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            c_0++;
        }
        else if (arr[i] % 3 == 1) {
            c_1++;
        }
        else {
            c_2++;
        }
    }
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int c_0 = 0,c_1 = 0,c_2 =0;
        count_k(arr,c_0,c_1,c_2,n);
        if ((c_0 == 0 && c_1 != 0 && c_2 != 0) || c_0 > (c_1 + c_2 + 1)) {
            cout << "No";
        }
        else{
            cout<<"Yes";
        }
    }
}
