#include <iostream>
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

int CountNodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftcount = CountNodes(root->left);
    int rightcount = CountNodes(root->right);

    return 1 + leftcount + rightcount;
}

int main()
{

    node *root = new node(10);

    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->left = new node(60);
    root->right->right = new node(70);

    cout << CountNodes(root);
}