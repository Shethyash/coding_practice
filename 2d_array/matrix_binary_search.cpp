#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://leetcode.com/problems/search-a-2d-matrix/

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int col = matrix[0].size();
    int s = 0, e = matrix.size() * col - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        // find column and row from mid
        // row = mid / col
        // col = mid % col
        int element = matrix[mid / col][mid % col];
        if (element == target)
        {
            return 1;
        }
        if (element < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return 0;
}

int main()
{
    vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << searchMatrix(matrix, 6) << endl;
    return 0;
}