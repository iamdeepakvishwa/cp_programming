#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll minKey(ll key[], bool mstSet[],ll n)
{
    // Initialize min value
    ll max = INT_MIN, max_index;

    for (int v = 0; v < n; v++)
        if (mstSet[v] == false && key[v] > max)
            max = key[v], max_index = v;

    return max_index;
}

int main(){
    ll n,d;
    cin>>n>>d;
    ll arr[n][d];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<d;j++){
            cin>>arr[i][j];
        }
    }
    ll matrix[n][n];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            ll k=0,weight=0;
            while(k<d){
                if(i==j){
                    matrix[i][j] = 0;
                    k++;
                }else{
                    weight += abs(arr[i][k] - arr[j][k]);
                    k++;
                }
            }
            matrix[i][j] = weight;
        }
    }
    ll parent[n];
    ll key[n];
    bool mstSet[n];
    for(ll i=0;i<n;i++){
        key[i] = INT_MIN;
        mstSet[i]= false;
    }
    key[0]= 0;
    parent[0] =-1;
    for(ll count =0;count<n-1;count++){
        ll u = minKey(key,mstSet,n);
        mstSet[u] = true;
        for (ll v = 0; v < n; v++){
            if (matrix[u][v] && mstSet[v] == false && matrix[u][v] > key[v]){
                parent[v] = u, key[v] = matrix[u][v];
            }
        }
    }
    ll res= 0;
    for(ll i=1;i<n;i++){
        res+=matrix[i][parent[i]];
    }
    cout<<res<<endl;
}
