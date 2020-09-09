#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k,p1[20],p2[20],e1,e2,dep[20][20];
    /* Get Events */
    cout<<"*** Lamport's Logical Clock ***\n";
    cout<<"Enter the Events: ";
    cin>>e1>>e2;
    for(int i=0;i<e1;i++){
        p1[i] = i+1;
    }
    for(int i=0;i<e2;i++){
        p2[i] = i+1;
    }
    cout<<"Enter the Dependency Matrix:\n";
    cout<<"\nEnter 1 if E1->E2 \nEnter -1, if E2->E1 \nElse Enter 0 \n\n";
    cout<<" ";
    for(int i=0;i<e2;i++){
        cout<<"e2 "<<i+1;
    }
    for(int i=0;i<e1;i++){
        cout<<"\ne1 "<<i+1;
        for(int j=0;j<e2;j++){
            cin>>dep[i][j];
        }
    }
    for(i=0;i<e1;i++){
        for(j=0;j<e2;j++){
             if(dep[i][j]==1){
                p2[j]=max(p2[j],p1[i]+1);
                for(k=j;k<e2;k++){
                    p2[k+1]=p2[k]+1;
                }
            }
            if(dep[i][j]==-1){
                p1[i]=max(p1[i],p2[j]+1);
                for(k=i;k<e1;k++)
                    p2[k+1]=p1[k]+1;
            }
        }
    }
    cout<<"\nP1: ";
    for(i=0;i<e1;i++){
        cout<<p1[i];
    }
    cout<<"\nP2:";
    for(j=0;j<e2;j++){
        cout<<p2[j];
    }
}
