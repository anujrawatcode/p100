/*
   Depth First Search
*/

#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DfsRec(vector<int> adj[], int s, vector<bool> &visited)
{
    visited[s] = true;
    cout << s;
    for (int i : adj[s])
        if (visited[i] == false)
            DfsRec(adj, i, visited);
}
void DFS(vector<int> adj[], int s, int V)
{
    vector<bool> visited(V, false);
    DfsRec(adj, s, visited);
}

int main()
{
    int V = 4;
    vector<int> adj[V]; // array of vectors
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);

    DFS(adj, 0, V);

    return 0;
}