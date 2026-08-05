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

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
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

    cout << " preorder : ";
    preorder(root);
    cout << endl;

    cout << " inorder : ";
    inorder(root);
    cout << endl;

    cout << " postorder : ";
    postorder(root);
    cout << endl;

    return 0;
}