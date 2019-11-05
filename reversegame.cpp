#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n],reverse[n];
        for(int i=0;i<n;i++){
            arr[i] = i;
        }
        int mid = floor(n/2);
        int j = mid;
        int K =0;
        sort(arr+mid,arr+n,greater<int>());
        for(int i=0;i<n;i++){
            if(i%2==0){
                reverse[i]=arr[j];
                j++;
            }
            else{
                reverse[i] = arr[K];
                K++;
            }
        }
        for(int i =0;i<n;i++){
            if(reverse[i]==k){
                cout<<i<<endl;
                break;
            }
        }
    }

}
