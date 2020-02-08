#include <bits/stdc++.h>
using namespace std;


int main() {
    int T;
  	cin >> T;
  	for(int t = 0 ; t < T; ++t) {
        int n;
      	cin >> n;
      	vector<string> words(n);
      	for(int i = 0 ; i < n ; ++i) {
        	cin >> words[i];
        }
        int sum =0;
      	for(int i = 0 ; i < n ; ++i) {
        	cin >> words[i];
        }
        for(int i=0;i<n;i++){
            cout<<"in loop";
            cout<<words[i].size();
            for(int j=0;j<(words[i].size());j++){
                if(words[i][j] == 'B' ){
                    sum = sum+2;
                }
                else{
                    if(words[i][j] =='A' || words[i][j] =='D' || words[i][j] =='O' || words[i][j] =='P' || words[i][j] =='Q' || words[i][j] =='R' || words[i][j] =='a' || words[i][j] =='b' || words[i][j] =='d' || words[i][j] =='e' || words[i][j] =='o' || words[i][j] =='p' || words[i][j] =='q'){
                        sum = sum +1;
                    }
                }
            }
        }
        cout<<sum<<endl;
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    }
    return 0;
}
