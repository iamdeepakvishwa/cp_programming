/*
Given an array A of positive integers. Your task is to find the leaders in the array.

Note: An element of array is leader if it is greater than or equal to all the elements to its right side. Also, the rightmost element is always a leader.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N denoting the size of array.
The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:
For each testcase, in a new line, the leaders will be printed.
*/


#include<bits/stdc++.h>
using namespace std;

void Leaders(int arr[],int n){
    int l =0
    for(int i=0;i<n;i++){
        l = 0
        for(int j=i+1;j<n;j++){
            if(arr[j]>=arr[i]){
                break ;
            }
        }
        if(l==1){
            cout<<arr[i];
        }
    }
}

void Leaders1(int arr[] ,int n){
    int i = arr[n-1];
    cout<<i;
    for(int j = n-2;j>=0;j--){
        if(j < arr[j]){
            i = arr[j];
            cout<<i;
        }
    }
}

int main(){

}
