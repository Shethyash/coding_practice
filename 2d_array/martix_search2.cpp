#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://leetcode.com/problems/search-a-2d-matrix-ii/

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size(), col = matrix[0].size();
    int rIndex = 0, cIndex = col - 1;

    while (rIndex < row && cIndex >= 0)
    {
        int element = matrix[rIndex][cIndex];
        if (element == target)
        {
            return 1;
        }
        if (element < target)
        {
            rIndex++;
        }
        else
        {
            cIndex--;
        }
    }
    return 0;
}

int main()
{
    vector<vector<int>> matrix{{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
    cout << searchMatrix(matrix, 6) << endl;
    return 0;
}