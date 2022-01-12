#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// https://binarysearch.com/problems/List-to-Binary-Search-Tree

class Tree
{
public:
    int val;
    Tree *left;
    Tree *right;
};

Tree *make(vector<int> &nums, int s, int e)
{
    if (s > e)
        return nullptr;
    int k = s + floor((e - s + 1) / 2);

    Tree *node = new Tree();
    node->val = nums[k];
    node->left = make(nums, s, k - 1);
    node->right = make(nums, k + 1, e);
    return node;
}

int main()
{
    vector<int> nums{1, 2, 3, 4, 5, 6, 7};
    make(nums, 0, nums.size() - 1);
    return 0;
}