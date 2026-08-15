#include <iostream>
#include <climits>
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

node *LCA(node *root, int p, int q)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (p < root->data && q < root->data)
    {
        return LCA(root->left, p, q);
    }
    if (p > root->data && q > root->data)
    {
        return LCA(root->right, p, q);
    }
    return root;
}

int main()
{

    node *root = new node(50);

    root->left = new node(30);
    root->right = new node(70);
    root->left->left = new node(20);
    root->left->right = new node(40);
    root->right->left = new node(60);
    root->right->right = new node(80);

    node *answer = LCA(root, 20, 40);

    cout << "LCA = " << answer->data;

    return 0;
}