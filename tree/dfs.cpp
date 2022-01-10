#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// dfs

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
    Tree *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

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