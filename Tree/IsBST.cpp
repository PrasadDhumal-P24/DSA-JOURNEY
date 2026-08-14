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

bool isBST(node *root, long long minValue, long long maxValue)
{
    if (root == NULL)
    {
        return true;
    }

    if (root->data <= minValue || root->data >= maxValue)
    {
        return false;
    }

    return isBST(root->left, minValue, root->data) &&
           isBST(root->right, root->data, maxValue);
}

int main()
{

    node *root = new node(10);

    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(2);
    root->left->right = new node(50);
    root->right->left = new node(60);
    root->right->right = new node(70);

    bool answer = isBST(root, LLONG_MIN, LLONG_MAX);

    if (answer)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}