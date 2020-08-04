#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    //Your code here
    //return vector with correct order of elements
    vector<int> res;
    int max1 = arr1[n-1];
    int max2 = arr2[m-1];
    int ans = 0;
    if(max2 > max1) {
        ans = max2;
    }
    else{
        ans = max1;
    }
    int newtable[ans+1] = {0};
    res.push_back(arr1[0]);
    newtable[arr1[0]]+=1;

    for(int i = 1; i < n; i++){
        // Checking whether current element
        // is not equal to it's previous element
        if(arr1[i] != arr1[i - 1])
        {
            res.push_back(arr1[i]);
            newtable[arr1[i]]+=1;
        }
    }
    for(int j = 0; j < m; j++)
    {
        // By checking whether it's already
        // present in newtable or not
        if(newtable[arr2[j]] == 0)
        {
            res.push_back(arr2[j]);
            newtable[arr2[j]]+=1;
        }
    }
    sort(res.begin(),res.end());
    return res;
}


int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cout<<findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}
