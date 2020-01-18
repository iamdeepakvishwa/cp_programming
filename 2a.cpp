#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    vector<pair<string,int>> rounds(n);
    map<string,int> playerScore;

    for(i=0;i<n;i++){
        cin>>rounds[i].first>>rounds[i].second;
        playerScore[rounds[i].first] += rounds[i].second;
    }
    set<string> Winner;
    int m(-1000001);
    for (map<string, int>::iterator it = playerScore.begin(); it != playerScore.end(); ++it){
        if (it->second > m){
            m = it->second;
            Winner.clear();
            Winner.insert(it->first);
        }
        else if (it->second == m){
            Winner.insert(it->first);
        }
    }
    if (Winner.size() > 1)
    {
        playerScore.clear();
        for (vector<pair<string, int>>::iterator it = rounds.begin(); it != rounds.end(); ++it)
        {
            playerScore[it->first] += it->second;
            if (playerScore[it->first] >= m && Winner.count(it->first) == 1)
            {
                Winner.clear();
                Winner.insert(it->first);
                break;
            }
        }
    }

    cout << *Winner.begin() << endl;
    return 0;
}
