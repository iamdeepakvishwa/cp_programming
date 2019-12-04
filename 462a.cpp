#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,j,n,count =0;
    cin>>n;
    char arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int even =1;
    for(i=0;i<n;i++){
        count =0;
        for(j=0;j<n;j++){
            if (i-1 >= 0 and arr[i-1][j] == 'o'){
                count++;
            }
            if (i+1 < n and arr[i+1][j] == 'o'){
                count++;
            }
            if(j-1 >= 0 and arr[i][j-1] == 'o'){
                count++;
            }
            if(j+1 < n and arr[i][j+1] == 'o'){
                count++;
            }
            if (count%2 == 1)
                even = 0;

        }
    }
    if(even){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
