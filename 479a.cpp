#include<bits/stdc++.h>

using namespace std;
int main(){
    int x,y,z,arr[6];
    cin>>x>>y>>z;
    arr[0] = x*y*z;
    arr[1] = x+(y*z);
    arr[2] = x*(y+z);
    arr[3] = (x*y)+z;
    arr[4] = (x+y)*z;
    arr[5] = x+y+z;
    sort(arr,arr+6);
    cout<<arr[5];
}
