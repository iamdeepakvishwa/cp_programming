#include<bits/stdc++.h>
using namespace std;

// Naive Solution
void search(int arr[r][c],int x){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] ==x) {
                cout<<i<<" "<<j;
                return ;
            }
        }
    }
}

// Optimal Solution O(n)
void searchOptimum(int arr[r][c], int x){
    int i =0;
    for(int j= c-1;j>=0;j--){
        if(arr[i][j] == x){
            cout<<i <<" "<<j;
            return ;
        }else if(i < R && arr[i][j] < x){
            i++;
        }
    }

}

int main(){
    int i,j;
    cin>>i,j;
    int arr[i][j];
    int x;
    cin>>x;
    search(arr,i,j,x);
}
