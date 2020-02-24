#include<bits/stdc++.h>
using namespace std;

int compute(int a, int b , int x , int y){
    if(x==0 && y==0){
        if(a>b){
            return (a-1)*b;
        }
        else{
            return (b-1)*a;
        }
    }
    if((a-x)>x && (b-y)>y){
        if(b>a){
            return (b-y-1)*a;
        }
        else{
            return (a-x-1)*b;
        }
    }
    else{
        if((b-y)>y && (a-x)<x){
            if(b>a){
                return (b-y-1)*a;
            }
            else{
                return (a-(a-x)-1)*b;
            }
        }
        else {
            if((b-y)<y && (a-x)<x){
                if(b>a){
                    return (b-(b-y))*a;
                }
                else{
                    return (a-(a-x))*b;
                }
            }
            else{
                if((b-y)<y && (a-x)>x){
                    if(b>a){
                        return (b-(b-y))*a;
                    }
                    else{
                        if(a==b){
                            if(y>x){
                                return a*y;
                            }
                            else{
                                return a*x;
                            }
                        }
                        else{
                            (a-x-1)*b;
                        }
                    }
                }
            }
        }
    }
}


int main(){
    int t;/* condition */
    cin>>t;
    while (t--) {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int result =compute(a,b,x,y);
        cout<<result<<endl;
        /* code */
    }


}
