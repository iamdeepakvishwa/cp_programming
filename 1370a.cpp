#include<bits/stdc++.h>
using namespace std;


int maxgcdfunction(int n){
    int h = 0;
    for(int i = 1; i <= n; i++)
        h = max(h, i);

    int count[h + 1] = {0};
    for(int i = 1; i <= n; i++)
        count[i]++;

    int c = 0;

    for(int i = h; i >= 1; i--){
        int j = i;
        c = 0;
        while (j <= h)
        {
            if(count[j] >=2){
                return j;
            }
            else if (count[j] == 1){
                c++;
            }
            j += i;
            if (c == 2)
                return i;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<maxgcdfunction(n)<<endl;
    }
}
