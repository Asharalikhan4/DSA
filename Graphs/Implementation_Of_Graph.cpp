#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int adj[n+1][m+1];      // declaring the adjacent matrix.
    for(int i = 0; i < m; i++){     // take edges as input.  
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    return 0;
}