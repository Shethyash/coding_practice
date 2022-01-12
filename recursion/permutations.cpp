#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://leetcode.com/problems/permutations/
// Notes : https://drive.google.com/file/d/1UcPqTr312lG5lffIPEB8rU7KKnZDDwAI/view

void solve(vector<int> &nums, int index, vector<vector<int>> &ans)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    // recursive case
    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[index], nums[i]);
        solve(nums, index + 1, ans);
        // backtrack
        swap(nums[index], nums[i]);
    }
}

vector<vector<int>> permutation(vector<int> &nums)
{
    if (nums.size() == 0)
        return {};
    vector<vector<int>> ans;
    solve(nums, 0, ans);
    return ans;
}

int main()
{
    vector<int> nums{1, 2, 3};
    vector<vector<int>> ans = permutation(nums);
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