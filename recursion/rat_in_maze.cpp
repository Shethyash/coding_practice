#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#
// Notes : https://drive.google.com/file/d/1XJ0WuSmJNWoH-sgzk-1Y_ofGltC3IxZ2/view

class Solution
{
public:
    bool isSafe(vector<vector<int>> &maze, int size, int newX, int newY, vector<vector<int>> &visited)
    {
        if (newX >= 0 && newX < size && newY >= 0 && newY < size && visited[newX][newY] == 0 && maze[newX][newY] == 1)
            return true;
        else
            return false;
    }

    void solve(vector<vector<int>> &maze, int n, vector<string> &ans, int x, int y, vector<vector<int>> &visited, string path)
    {
        // base case
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }

        visited[x][y] = 1;
        // down
        if (isSafe(maze, n, x + 1, y, visited))
        {
            path += "D";
            solve(maze, n, ans, x + 1, y, visited, path);
            path.pop_back();
        }
        // left
        if (isSafe(maze, n, x, y - 1, visited))
        {
            path += "L";
            solve(maze, n, ans, x, y - 1, visited, path);
            path.pop_back();
        }
        // right
        if (isSafe(maze, n, x, y + 1, visited))
        {
            path += "R";
            solve(maze, n, ans, x, y + 1, visited, path);
            path.pop_back();
        }
        // Up
        if (isSafe(maze, n, x - 1, y, visited))
        {
            path += "U";
            solve(maze, n, ans, x - 1, y, visited, path);
            path.pop_back();
        }
        visited[x][y] = 0;
    }
    vector<string> findPath(vector<vector<int>> &maze, int n)
    {
        // Your code goes here
        vector<string> ans;
        if (maze[0][0] == 0)
        {
            return ans;
        }
        vector<vector<int>> visited(maze);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }
        string path = "";
        solve(maze, n, ans, 0, 0, visited, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> maze(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> maze[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(maze, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends