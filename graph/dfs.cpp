#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> &temp, vector<bool> &visited, vector<int> adj[], int node)
{
    if (visited[node])
        return;
    temp.push_back(node);
    visited[node] = true;
    for (auto nbr : adj[node])
    {
        dfs(temp, visited, adj, nbr);
    }
}

vector<vector<int>> depthFirstSearch(int n, int E, vector<vector<int>> &edges)
{
    vector<int> adj[n];
    for (int i = 0; i < E; i++)
    {
        int u, v;
        u = edges[i][0];
        v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> visited(n, false);
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        dfs(temp, visited, adj, i);
        if (temp.size() == 0)
            continue;
        ans.push_back(temp);
    }
    return ans;
}