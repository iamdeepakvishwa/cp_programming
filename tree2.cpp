#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    unordered_set<int> s;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        s.insert(arr[i]);
	    }
	    int count = s.size();
	    if(s.count(0)){
	        cout<<count-1<<endl;
	    }else{
	        cout<<count<<endl;
	    }
	}
	return 0;
}
