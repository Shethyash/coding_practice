#include <bits/stdc++.h>
using namespace std;

void dfs(int node, stack<int> &st, vector<int> adj[], vector<bool> &vis)
{
    vis[node] = true;
    for (auto nbr : adj[node])
    {
        if (!vis[nbr])
        {
            dfs(nbr, st, adj, vis);
        }
    }
    st.push(node);
}
// Function to return list containing vertices in Topological order.
vector<int> topoSort(int n, vector<int> adj[])
{
    // code here
    vector<bool> vis(n, false);
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i, st, adj, vis);
        }
    }
    vector<int> ans;
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}

// kahn's algo
vector<int> bfs_topoSort(int n, vector<int> adj[])
{
    // code here
    //  find all in-degree
    vector<int> indeg(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < adj[i].size(); j++)
        {
            indeg[adj[i][j]]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
        {
            q.push(i);
        }
    }

    // do bfs
    vector<int> ans;
    while (!q.empty())
    {
        int f = q.front();
        q.pop();

        ans.push_back(f);

        for (auto i : adj[f])
        {
            indeg[i]--;
            if (indeg[i] == 0)
            {
                q.push(i);
            }
        }
    }
    return ans;
}