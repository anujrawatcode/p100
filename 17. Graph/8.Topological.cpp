/*
              Topological Sort

    Store inDegrees of all the vertices
    Create queue q
    push vertices of inDegree 0 in q
    while(!q.empty())
    {
        cout<<q.pop();
        traverse adjecent
        {
            indegree --adj
            if(indegree of adj 0)
              push adj in q
        }
    }
*/

#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}
void toposort(vector<int> adj[], int V)
{
    // Counting inDegree by counting presence in adj list
    vector<int> inDegree(V, 0);
    for (int i = 0; i < V; i++)
        for (int x : adj[i])
            inDegree[x]++;

    //Creating queue
    queue<int> q;

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
    }
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

    toposort(adj, V);
}