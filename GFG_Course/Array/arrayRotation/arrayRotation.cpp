/*
    Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
*/

#include<bits/stdc++.h>
using namespace std;

/*
Time complexity : O(n)
Auxiliary Space : O(d)
*/

void rotate(int arr[] ,int n ,int d){
    int temp[d];
    for(int i =0;i<d;i++){
        temp[i] = arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d] = arr[j];
    }
    for(int i = 0;i<d;i++){
        arr[n-d+i] = temp[i];
    }
}

/*
    Rotate one by one
    Time complexity : O(n * d)
    Auxiliary Space : O(1)
*/

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

/*
    A Juggling Algorithm
    This is an extension of method 2. Instead of moving one by one, divide the array in different sets
    where number of sets is equal to GCD of n and d and move the elements within sets.
    Time complexity : O(n)
    Auxiliary Space : O(1)
*/

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void leftRotation(int arr[], int n ,int d){
    d = d % n ; // if d>=n
    int gd = gcd (d,n);
    for(i=0;i<gd;i++){
        int temp = arr[i];
        int j =i;
        while(1){
            int k =j+d;
            if(k>=n){
                k -= n;
            }
            if(k==i){
                break;
            }
            arr[j] = arr[k];
            j =k;
        }
        arr[j] = temp;
    }
}

int main(){
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    // Function calling
    leftRotate(arr, 2, n);   
    return 0;
}
