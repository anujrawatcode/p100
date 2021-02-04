/*
   Count the number of Islands in graph or number of disconnected graphs
   Find the connected components
   BFS of Disconnected graph
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
        //cout << u;
        q.pop();

        for (int v : adj[u])
            if (visited[v] == false)
            {
                q.push(v);
                visited[v] = true;
            }
    }
}

int bfs(vector<int> adj[], int V)
{
    int cnt = 0;

    vector<bool> visited(V, false);
    for (int i = 0; i < V; i++)
        if (visited[i] == false)
        {
            BFS(adj, i, visited);
            cnt++;
        }
    return cnt;
}

int main()
{
    int V = 5;
    vector<int> adj[V]; // array of vectors
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 0, 2);

    addEdge(adj, 3, 4);

    cout << bfs(adj, V); // No source vertex is given

    return 0;
}