#include<bits/stdc++.h>

using namespace std;

int main(){
    int r,c,i,j,n=0,pieces,row[11]={0},col[11]={0};
    cin>>r>>c;
    char arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='S'){

                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    int cakes(0);
    for (int i = 0; i < r; ++i){
        for (int j = 0; j < c; ++j){
            if (row[i] == 0 || col[j] == 0)
            {
                cakes += 1;
            }
        }
    }
    cout << cakes << endl;
    return 0;

}
