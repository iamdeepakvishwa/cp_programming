#include<bits/stdc++.h>
using namespace std;

int main(){
    int total;
    string str;
    cin>>total>>str;
    vector<pair<int,int>> getter(total,{INT_MAX,INT_MAX});
    for(int i=0;i<total;i++){
        if(str[i] == 'A'){
            int left =0;
            int j = i-1;
            if(j>0){
                for(j;j>=0;j--){
                    if(str[j]=='-'){
                        getter[j].first=min(getter[j].first,left);
                    }
                    else if(str[j]=='A'||str[j]=='B'){
                        break;
                    }
                    left++;
                }
            }
        } else if(str[i] == 'B'){
            int right = 0;
            int j = i+1;
            if(j<total){
                for(j;j<total;j++){
                    if(str[j]=='-'){
                       getter[j].second = min(getter[j].second,right);
                   }
                   else if(str[j]=='B'||str[j]=='A'){
                       break;
                   }
                   right++;
                }
            }
        }
    }
    int a_count=0;
    int b_count=0;
    for(int i=0;i<total;i++){
        int x = getter[i].first;
        int y= getter[i].second;
        if(str[i] == 'A'){
            a_count++;
        }
        else if(str[i] == 'B'){
            b_count++;
        }
        if(str[i] == '-'){
            if(x>y){
                b_count++;
            }
            else if(x<y){
                a_count++;
            }
        }
    }
    if(a_count>b_count){
       cout<<"A";
    }
   else if(b_count>a_count){
       cout<<"B";
   }
   else{
       cout<<"Coalition government";
   }
}
