/*
    Detecting Cycle in a Directed graph
    Topological Sort is vaild in directed graph only if No cycle is present
*/

#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}
bool toposort(vector<int> adj[], int V)
{
    // Counting inDegree by counting presence in adj list
    vector<int> inDegree(V, 0);
    for (int i = 0; i < V; i++)
        for (int x : adj[i])
            inDegree[x]++;

    //Creating queue
    queue<int> q;

    // Count variable
    int cnt = 0;

    //Pushing 0 inDegree V in q
    for (int i = 0; i < V; i++)
        if (inDegree[i] == 0)
            q.push(i);

    while (!q.empty())
    {
        int u = q.front();
        cout << u;
        q.pop();

        for (int x : adj[u])
        {
            inDegree[x]--;
            if (inDegree[x] == 0)
                q.push(x);
        }
        cnt++;
    }
    return (cnt != V);
}
int main()
{
    int V = 5;
    vector<int> adj[V];

    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);

    cout << toposort(adj, V);
}