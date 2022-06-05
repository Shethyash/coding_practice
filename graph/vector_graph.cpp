#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> edges;
    cout << "Enter edge: ";
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    vector<int> adj[n];
    for (int i = 0; i < m; i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }

    vector<vector<int>> result(n);
    for (int i = 0; i < n; i++)
    {
        result[i].push_back(i);
        for (int j = 0; j < adj[i].size(); j++)
        {
            result[i].push_back(adj[i][j]);
        }
    }
    // print result
    for (int i = 0; i < n; i++)
    {
        cout << i << " : ";
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}