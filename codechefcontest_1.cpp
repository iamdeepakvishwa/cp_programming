#include<bits/stdc++.h>
using namespace std;

void compute(int t){
    int n = 0,sum=0,diff;
    while(sum<=t){
        n++;
        sum = n*((n*4)+2);
    }
    cout<<endl<<"n: "<<n<<endl;
    int s = (n-1)*((4*n)-2);
    diff = t - s;

    // calculating u,l,d,r partially
    int u = (n-1)*(n-1);
    int l = u;
    int d = (n-1)*n;
    int r = d;
    cout<<"u: "<<u<<" "<<" l: "<<l<<" "<<" d: "<<d<<" "<<" r "<<r;
    // calculating u,l,d,r for complete

    int an = (2*(n-1))+1;
    int ln = an;
    int dn = 2*(n-1);
    int rn = dn;
    cout<<endl<<"an: "<<an<<" ln: "<<ln<<" dn: "<<dn<<" rn: "<<rn<<endl;
    if(diff>an){
        u = u + an;
        diff = diff - an;
        cout<<endl<<"diff: "<<diff;
        if(diff>ln){
            l = l + ln;
            diff = diff - ln;
            cout<<endl<<"diff: "<<diff;
            if(diff>dn){
                d = d + dn;
                diff = diff - dn;
                cout<<endl<<"diff: "<<diff;
                if(diff > rn){
                    r = r + rn;
                    diff = diff - rn;
                    cout<<endl<<"diff: "<<diff;
                }
                else{
                    r = r + diff;
                }
            }
            else{
                d = d + diff;
            }
        }
        else{
            l = l + diff;
        }
    }
    else{
        u = u + diff;
    }
    cout<<endl;
    cout<<u<<" "<<l<<" "<<d<<" "<<r;
    cout<<endl;
    int y =0, x=0;
    y = y + u;
    x = x - l;
    y = y - d;
    x = x + r;
    cout<<"x: "<<x<<" y: "<<y<<" "<<endl;
}
int main(){
    compute(50);
}
