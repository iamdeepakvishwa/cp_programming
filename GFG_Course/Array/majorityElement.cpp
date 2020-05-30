#inlclude<bits/stdc++.h>
using namespace std;

/*
    Majority element is an element
    that appears more than n/2 times in an array of size n.
    two methods to find majority element in an array are discussed.
*/

//Naive Approach O(n^2)

int majorityElement(int arr[] ,int n){
    int count,res=0;
    for(int i=0;i<n;i++){
        count =1;
        for(int j= i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count>(n/2)){
            return i;
        }
    }
    return -1;
}

//Efficient Approach O(n) Using Moore’s Voting Algorithm

int majorityElement1(int arr[],int n){
    int index = 0, count =1;
    for(int i=1;i<n;i++){
        if(arr[index] == arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count == 0){
            index = i;
        }
    }
    count =0;
    for(i=0;i<n;i++){
        if(arr[index] ==arr[i]){
            count++;
        }
    }
    if(count <= n/2){
        res = -1;
    }
    return res;
}
