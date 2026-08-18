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

bool isIdentical(node *root1, node *root2)
{

    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    if (root1 == NULL || root2 == NULL)
    {
        return false;
    }
    if (root1->data != root2->data)
    {
        return false;
    }
    return isIdentical(root1->left, root2->left) && isIdentical(root2->right, root2->right);
}

int main()
{

    node *root1 = new node(10);
    root1->left = new node(20);
    root1->right = new node(20);

    node *root2 = new node(10);
    root2->left = new node(20);
    root2->right = new node(30);

    if (isIdentical(root1, root2))
    {
        cout << "both tree is identical";
    }
    else
    {
        cout << "not identical";
    }

    return 0;
}