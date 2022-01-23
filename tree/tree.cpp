class Tree
{
public:
    int val;
    Tree *left;
    Tree *right;

    // replace the default constructor
    Tree(int val = 0, Tree *left = nullptr, Tree *right = nullptr)
    {
        this->val = val;
        this->left = left;
        this->right = right;
    }

    // replace the copy constructor
    Tree(const Tree &other)
    {
        this->val = other.val;
        this->left = other.left;
        this->right = other.right;
    }

    Tree *newNode(int data, Tree *left = nullptr, Tree *right = nullptr)
    {
        Tree *node = new Tree();
        node->val = data;
        node->left = left;
        node->right = right;
        return node;
    }
};
