#include <bits/stdc++.h>
#include "tree.cpp"
using namespace std;
#define endl "\n"

// bfs solution

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
    Tree obj;
    Tree *root = obj.newNode(1);
    root->left = obj.newNode(2);
    root->right = obj.newNode(3);
    root->left->left = obj.newNode(4);
    root->left->right = obj.newNode(5);
    root->right->left = obj.newNode(6);
    root->right->right = obj.newNode(7);

    vector<int> ans = solve(root);
    for (auto &i : ans)
    {
        cout << i << " ";
    }
    return 0;
}