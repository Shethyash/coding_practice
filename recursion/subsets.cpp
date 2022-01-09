#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://leetcode.com/problems/subsets/

void subsetsHelper(vector<int> nums, int index, vector<int> curr, vector<vector<int>> &res)
{
    // base case
    if (index == nums.size())
    {
        res.push_back(curr);
        return;
    }

    // exclude case
    subsetsHelper(nums, index + 1, curr, res);

    // include case
    int element = nums[index];
    curr.push_back(element);
    subsetsHelper(nums, index + 1, curr, res);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> res;
    vector<int> cur;
    subsetsHelper(nums, 0, cur, res);
    return res;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = subsets(nums);

    for (auto &i : ans)
    {
        for (auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}