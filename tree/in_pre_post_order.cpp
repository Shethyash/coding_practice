#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// orders

void printV(vector<int> V)
{
    for (auto &i : V)
        cout << i << " ";
}
class Tree
{
public:
    int val;
    Tree *left;
    Tree *right;
};

Tree *newNode(int data, Tree *left = nullptr, Tree *right = nullptr)
{
    Tree *node = new Tree();
    node->val = data;
    node->left = left;
    node->right = right;
    return node;
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
    Tree *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    vector<int> inOrder, postOrder, preOrder;
    printV(inOrder);
    printV(postOrder);
    printV(preOrder);
    return 0;
}