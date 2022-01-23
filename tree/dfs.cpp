#include <bits/stdc++.h>
#include "tree.cpp"
using namespace std;
#define endl "\n"

// dfs

void dfs(Tree *root, vector<int> &ans)
{
    if (root == NULL)
        return;
    ans.push_back(root->val);
    dfs(root->left, ans);
    dfs(root->right, ans);
}

void sDfs(Tree *root, vector<int> &arr)
{
    stack<Tree *> s;
    Tree *curr = root;
    while (!s.empty() || curr != NULL)
    {
        while (curr != NULL)
        {
            s.push(curr);
            arr.push_back(curr->val);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        curr = curr->right;
    }
}

int main()
{
    // static object allocation
    Tree obj;

    // dynamic object allocation
    Tree *root = new Tree;
    root->val = 1;
    root->left = root->newNode(2);
    root->right = root->newNode(3);
    root->left->left = root->newNode(4);
    root->left->right = root->newNode(5);
    root->right->left = root->newNode(6);
    root->right->right = root->newNode(7);

    vector<int> ans, sArr;
    dfs(root, ans);
    sDfs(root, sArr);
    for (auto &i : ans)
        cout << i << " ";
    cout << endl;
    for (auto &i : sArr)
        cout << i << " ";
    return 0;
}