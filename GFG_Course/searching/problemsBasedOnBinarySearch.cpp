#include<bits/stdc++.h>
using namespace std;


//Left most index of an element in an array
int leftmostElement(int arr[],int l,int r,int x){
    int mid = (l + (r-l))/2;
    if(l>r){
        return -1;
    }
    if(x==arr[mid] && (mid==0 || arr[mid-1] != x)){
        return mid;
    }
    if(x<=arr[mid]){
        binarySearch(arr,l,mid-1,x);
    }
    else{
        binarySearch(arr,mid+1,r,x);
    }
}

//rightMost index of an element in an array

int rightMost(int arr[],int l ,int r ,int x,int n){
    int mid = (l +(r-l))/2;
    if(l>r){
        return -1;
    }
    if(x ==arr[mid] && (mid == (n-1) ||  arr[mid+1] != x)){
        return mid;
    }
    if(arr[mid]>x){
        binarySearch(arr,l,mid-1,x,n);
    }
    else{
        binarySearch(arr,mid+1,r,x,n);
    }
}
//Count of occurrences of x in sorted element
int count (int arr[],int n,int x){
/*
    int l = leftmostElement();
    int r = rightMost();
    int total = r-l+1;
*/
}
