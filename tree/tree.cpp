#include <bits/stdc++.h>
using namespace std;

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
