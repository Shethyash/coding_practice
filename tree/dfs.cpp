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
    Tree obj;
    Tree *root = obj.newNode(1);
    root->left = obj.newNode(2);
    root->right = obj.newNode(3);
    root->left->left = obj.newNode(4);
    root->left->right = obj.newNode(5);
    root->right->left = obj.newNode(6);
    root->right->right = obj.newNode(7);

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