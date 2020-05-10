#include<bits/stdc++.h>
using namespace std;

void leftRotation(int arr[],int n){
    int b = arr[0];
    for(int i = 0;i < n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = b;
}

void leftRotationD(int arr[],int n,int d){
    for(int i=0;i<d;i++){
        leftRotation(arr[],int n);
    }
}
void leftRotationDBetter(int arr[],int n,int d){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d] = arr[i];
    }
    for(int i=0;i<d;i++){
        arr[n-d+i] = temp[i];
    }
}

int main(){
    
}
