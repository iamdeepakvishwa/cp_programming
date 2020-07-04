#include<bits/stdc++.h>
using namespace std;

int func(int n){

    int count2 =0,count3 =0;
    while (n % 2 == 0) {
		n /= 2;
		count2++;
	}
	while (n % 3 == 0) {
		n /= 3;
		count3++;
	}
    if (n == 1 && count2 <= count3) {
		return (2 * count3 - count2);
	}
    else {
		return -1;
	}
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<func(n)<<endl;
    }
}
