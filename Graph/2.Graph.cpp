/*
   This is a basic implementation of graph data structure
   Using Adjacency List representation
*/

#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void print(vector<int> adj[], int V)
{
    for (int i = 0; i < V; i++)
    {
        for (int u : adj[i])
        {
            cout << u;
        }
        cout << endl;
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

    print(adj, V);
    return 0;
}