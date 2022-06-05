#include <bits/stdc++.h>
using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction)
    {
        adj[u].push_back(v);
        if (!direction)
            adj[v].push_back(u);
    }

    void printAdjList()
    {
        for (auto it : adj)
        {
            cout << it.first << " -> ";
            for (auto j : it.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter number of vertices: ";
    cin >> n;

    int m;
    cout << "Enter number of edges: ";
    cin >> m;

    graph g;

    cout << "Enter edge: ";
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }

    g.printAdjList();
    // sample input:
    /*
    Enter number of vertices: 5
    Enter number of edges: 6
    Enter edge:
    0 1
    1 2
    2 3
    3 1
    3 4
    0 4
    */
    return 0;
}