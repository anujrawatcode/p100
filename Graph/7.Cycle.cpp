/*  Cycle detection 
    If a vertex is encountered again and it is not parent then its a cycle
*/
#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

bool DfsRec(vector<int> g[], int s, vector<bool> &visited, int parent)
{
    visited[s] = true;

    for (int i : g[s])
    {
        if (visited[i] == false)
        {
            if (DfsRec(g, i, visited, s) == true)
            {
                return true;
            }
        }
        else if (visited[i] == true && i != parent)
            return true;
    }
    return false;
}

bool Cycle(vector<int> g[], int V)
{
    vector<bool> visited(V, false);

    for (int i = 0; i < V; i++)
    {
        if (visited[i] == false)
        {
            if (DfsRec(g, i, visited, -1) == true)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int V = 4;
    vector<int> adj[V];

    addEdge(adj, 0, 1);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 1);

    cout << Cycle(adj, 4);

    return 0;
}