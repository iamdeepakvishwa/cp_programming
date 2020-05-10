#include<bits/stdc++.h>
using namespace std;

void DFS(vector< pair<int,int> > graph[], int src, int prev_len, int *max_len, vector <bool> &visited) {
    // Mark the src node visited
    visited[src] = 1;

    // curr_len is for length of cable from src
    // city to its adjacent city
    int curr_len = 0;

    // Adjacent is pair type which stores
    // destination city and cable length
    pair < int, int > adjacent;

    // Traverse all adjacent
    for (int i=0; i<graph[src].size(); i++)
    {
        // Adjacent element
        adjacent = graph[src][i];

        // If node or city is not visited
        if (!visited[adjacent.first])
        {
            // Total length of cable from src city
            // to its adjacent
            curr_len = prev_len + adjacent.second;

            // Call DFS for adjacent city
            DFS(graph, adjacent.first, curr_len,
                max_len,  visited);
        }

        // If total cable length till now greater than
        // previous length then update it
        if ((*max_len) < curr_len)
            *max_len = curr_len;

        // make curr_len = 0 for next adjacent
        curr_len = 0;
    }
}
int longestCable(vector<pair<int,int> > graph[], int n) {
    // maximum length of cable among the connected
    // cities
    int max_len = INT_MIN;

    // call DFS for each city to find maximum
    // length of cable
    for (int i=1; i<=n; i++)
    {
        // initialize visited array with 0
        vector< bool > visited(n+1, false);

        // Call DFS for src vertex i
        DFS(graph, i, 0, &max_len, visited);
    }

    return max_len;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector< pair<int,int> > graph[n+1];
        int U,V,T;
        for(int i=0;i<m;i++){
            cin>>U>>V>>T;
            graph[U].push_back(make_pair(V, T));
            graph[V].push_back(make_pair(U, T));
        }
        cout << "Maximum length of cable = "<< longestCable(graph, n);
    }

}
