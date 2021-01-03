/*
   Breadth First Search for undirected graph
*/

#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFS(vector<int> adj[], int s, int V)
{
    queue<int> q;
    vector<bool> visited(V, false);

    q.push(s);
    visited[s] = true;

    while (!q.empty())
    {
        int u = q.front();
        cout << u ;
        q.pop();

        for (int v : adj[u])
            if (visited[v] == false)
            {
                q.push(v);
                visited[v] = true;
            }
    }
}

int main()
{
    int V = 4;
    vector<int> adj[V]; // array of vectors
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);

    BFS(adj, 0, V);
    
    return 0;
}