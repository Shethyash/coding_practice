#include <bits/stdc++.h>
#include "tree.cpp"
using namespace std;
#define endl "\n"

// orders

void printV(vector<int> V)
{
    for (auto &i : V)
        cout << i << " ";
}

void dfs_inOrder(Tree *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    dfs_inOrder(root->left, ans);
    ans.push_back(root->val);
    dfs_inOrder(root->right, ans);
}

void dfs_postOrder(Tree *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    dfs_postOrder(root->left, ans);
    dfs_postOrder(root->right, ans);
    ans.push_back(root->val);
}

void dsf_preOrder(Tree *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    ans.push_back(root->val);
    dsf_preOrder(root->left, ans);
    dsf_preOrder(root->right, ans);
}

int main()
{
    Tree *root = new Tree;
    root->val = 1;
    root->left = root->newNode(2);
    root->right = root->newNode(3);
    root->left->left = root->newNode(4);
    root->left->right = root->newNode(5);
    root->right->left = root->newNode(6);
    root->right->right = root->newNode(7);

    vector<int> inOrder, postOrder, preOrder;
    printV(inOrder);
    printV(postOrder);
    printV(preOrder);
    return 0;
}