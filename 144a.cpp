#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,min,max,flag=0,max_index=0,min_index=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    min = arr[0];
    max = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]<=min){
            min = arr[i];
            min_index =i;
        }
        if(arr[i]>max){
            max = arr[i];
            max_index = i;
        }
    }
    if ( min_index<max_index){

         min_index=(n-1)-min_index;
         cout<<(min_index+max_index-1)<<endl;
    }
    else{
        min_index=(n-1)-min_index;
        cout<<(min_index+max_index)<<endl;
    }

}
