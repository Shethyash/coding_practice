#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

// bfs solution

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

vector<int> solve(Tree *root)
{
    queue<Tree *> q;
    q.push(root);
    Tree *curr;
    vector<int> ans;
    while (!q.empty())
    {
        int s = q.size();
        for (int i = 0; i < s; i++)
        {
            curr = q.front();
            ans.push_back(curr->val);
            q.pop();
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
    return ans;
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

    vector<int> ans = solve(root);
    for (auto &i : ans)
    {
        cout << i << " ";
    }
    return 0;
}