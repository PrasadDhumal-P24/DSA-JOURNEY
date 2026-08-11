#include <iostream>
#include <algorithm>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftheight = height(root->left);
    int rightheight = height(root->right);

    return 1 + max(leftheight, rightheight);
}
int main()
{

    node *root = new node(10);
    root->left = new node(8);
    root->right = new node(9);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->left->left->left = new node(3);

    cout << height(root);

    return 0;
}
