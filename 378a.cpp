#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,awin=0,bwin=0,draw=0;
    cin>>a>>b;
    for(int i=1;i<=6;i++){
        int diffa = abs(i - a);
        int diffb = abs(i - b);
        if (diffa == diffb)
            draw++;
        else if (diffa < diffb)
            awin++;
        else
            bwin++;
    }
    cout<<awin<<" "<<draw<<" "<<bwin;


}
