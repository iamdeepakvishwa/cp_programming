#include<bits/stdc++.h>
using namespace std;

int compute(int arr[] , int n, int d){
    if(n==1){
        return arr[0];
    }
    int index_diff = 1;
    while (d > 0) {
        /* code */
        if(arr[index_diff]==0){
            index_diff++;
        }
        else{
            if((arr[index_diff]*index_diff) <= d){
                arr[0] += arr[index_diff];
                index_diff++;
                d = d - (arr[index_diff] * index_diff);
            }
            else{
                int can_moved = d / index_diff ;
                if(can_moved < arr[index_diff]){
                    arr[0] += can_moved;
                    d = d - (can_moved * index_diff);
                    arr[index_diff] -= can_moved;
                }
                else{
                    arr[0] += arr[index_diff];
                    index_diff++;
                    d = d - (arr[index_diff]* index_diff);
                }
            }
        }
    }
    return arr[0];
}
int main(){
    int arr[] = {1,4,5,6};
    int result = compute(arr,4,5);
    cout<<result;
}
