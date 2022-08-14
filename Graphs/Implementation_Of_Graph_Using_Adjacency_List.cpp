#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n << m;
    // for the unweighted graph
    vector<int> adj[n+1];

    // for the weighted graph
    vector<pair<int,int>> adj[n+1];
    for(int i = 0; i < m; i++){
        // for the unweighted graph
        int u, v;

        // for the weighted graph
        int u, v, wt;


        // for the unweighted graph
        cin >> u >> v;

        // for the weighted graph
        cin >> u >> v >> wt;

        // for the directed and for unweighted graph
        adj[u].push_back(v);
        adj[v].push_back(u);

        // for the weighted graph
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});

        // for the undirected graph
        adj[u].push_back(v);
    }
    return 0;
}