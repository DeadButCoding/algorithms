// for many  connnected components graph .
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}
void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> storeDFS)
{
    storeDFS.push_back(node);
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, vis, adj, storeDFS);
        }
    }
}
// Function to return a list containing the DFS traversal of the graph.
vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    vector<int> storeDFS;
    vector<int> vis(V + 1, 0);
    for (int i = 0; i <= V; i++)
    {
        if (!vis[i])
        {
            dfs(i, vis, adj, storeDFS);
        }
    }
    return storeDFS;
}
