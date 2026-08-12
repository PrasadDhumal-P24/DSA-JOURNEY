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

    return 1 + (leftheight + rightheight);
}

int countnodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftcount = countnodes(root->left);
    int rightcount = countnodes(root->right);

    return 1 + leftcount + rightcount;
}

int countleafnode(node *root)
{

    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    return countleafnode(root->left) + countleafnode(root->right);
}

int min(node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    node *temp = root;
    while (temp->left != NULL)
    {

        temp = temp->left;
    }
    return temp->data;
}
int max(node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    node *temp = root;
    while (temp->right != NULL)
    {

        temp = temp->right;
    }
    return temp->data;
}

bool search(node *root, int key)
{

    if (root == NULL)
    {
        return false;
    }
    if (key == root->data)
    {

        return true;
    }
    if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
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

    cout << height(root) << endl;

    cout << countnodes(root) << endl;
    cout << countleafnode(root) << endl;

    cout << max(root) << endl;
    cout << min(root) << endl;

    if (search(root, 600))
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }
    return 0;
}