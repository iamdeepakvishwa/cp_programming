#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, v, c, t;
    cin >> n >> v;
    vector<int> vect;

    for (int i = 0; i < n; i++){
        bool flag = false;
        cin >> c;
        for (int j = 0; j < c; j++){
            cin >> t;
            if (!flag and v > t){
                vect.push_back(i+1);
                flag = true;
            }
        }
    }

    cout << vect.size() << endl;
    for (auto& vec : vect)
        cout << vec << " ";
    return 0;
}
