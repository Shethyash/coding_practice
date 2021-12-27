#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://leetcode.com/problems/spiral-matrix/

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;

    int er = matrix.size() - 1, ec = matrix[0].size() - 1;
    int sr = 0, sc = 0;
    int tc = matrix.size() * matrix[0].size(), cc = 0;

    while (cc < tc)
    {
        // first row
        for (int i = sc; cc < tc && i <= ec; i++)
        {
            cc++;
            ans.push_back(matrix[sr][i]);
        }
        sr++;
        // last column
        for (int i = sr; cc < tc && i <= er; i++)
        {
            cc++;
            ans.push_back(matrix[i][ec]);
        }
        ec--;
        // last row
        for (int i = ec; cc < tc && i >= sc; i--)
        {
            cc++;
            ans.push_back(matrix[er][i]);
        }
        er--;
        // first column
        for (int i = er; cc < tc && i >= sr; i--)
        {
            cc++;
            ans.push_back(matrix[i][sc]);
        }
        sc++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> ans = spiralOrder(matrix);

    for (int it : ans)
    {
        cout << it << " ";
    }
    return 0;
}