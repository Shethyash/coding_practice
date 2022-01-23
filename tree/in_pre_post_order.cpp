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
    Tree obj;
    Tree *root = obj.newNode(1);
    root->left = obj.newNode(2);
    root->right = obj.newNode(3);
    root->left->left = obj.newNode(4);
    root->left->right = obj.newNode(5);
    root->right->left = obj.newNode(6);
    root->right->right = obj.newNode(7);

    vector<int> inOrder, postOrder, preOrder;
    printV(inOrder);
    printV(postOrder);
    printV(preOrder);
    return 0;
}