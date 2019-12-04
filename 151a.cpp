#include<bits/stdc++.h>
using namespace std;

int min(int x, int y, int z)
{
    if (!(y / x)) // Same as "if (y < x)"
        return (!(y / z)) ? y : z;
    return (!(x / z)) ? x : z;
}
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_drink = k*l;
    int req = n*nl;
    int req_Salt = n*np;
    int total_slices = c*d;
    int m = min((total_drink/nl),total_slices,(p/np))/n;
    cout<<m<<endl;
}
