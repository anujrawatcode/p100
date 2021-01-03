/*
   Breadth First Search 
   for Disconnected and Un-Known source
*/

#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFS(vector<int> adj[], int s, vector<bool> &visited)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while (!q.empty())
    {
        int u = q.front();
        cout << u;
        q.pop();

        for (int v : adj[u])
            if (visited[v] == false)
            {
                q.push(v);
                visited[v] = true;
            }
    }
}

void bfs(vector<int> adj[], int V)
{
    vector<bool> visited(V, false);
    for (int i = 0; i < V; i++)
        if (visited[i] == false)
            BFS(adj, i, visited);
}


int main()
{
    int V = 4;
    vector<int> adj[V]; // array of vectors
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);

    bfs(adj, V); // No source vertex is given

    return 0;
}