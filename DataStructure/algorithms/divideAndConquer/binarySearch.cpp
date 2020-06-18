#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[],int l , int r,int x){
    int mid = (l + r) /2; // mid = l + (r-l) /2
    if(l>r){
        return false;
    }
    if(x==arr[mid]){
        return true;
    }
    if(x>arr[mid]){
        binarySearch(arr,mid+1,r,x)
    }
    else{
        binarySearch(arr,l,mid-1,x);
    }
}

int main(){
    int arr[] = {1,2,4,3,1,32,2};
    binarySearch(arr,0,7,32);

}
