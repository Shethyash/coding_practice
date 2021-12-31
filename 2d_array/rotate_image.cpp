#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://leetcode.com/problems/rotate-image/

void rotate(vector<vector<int>> &matrix)
{
    // Transpose
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // reverse columns
    for (int i = 0; i < matrix.size(); i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

void printMatrix(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printMatrix(matrix);
    rotate(matrix);
    cout << endl;
    printMatrix(matrix);

    return 0;
}