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

bool hashmapsum(node *root, int targetSum)
{

    if (root == NULL)
    {
        return false;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return targetSum == root->data;
    }
    int remainingsum = targetSum - root->data;

    return hashmapsum(root->left, remainingsum) || (root->right, remainingsum);
}

int main()
{

    node *root = new node(50);
    root->left = new node(30);
    root->right = new node(70);

    root->left->left = new node(20);
    root->left->right = new node(40);

    root->right->left = new node(60);
    root->left->right = new node(80);

    int targetSum = 100;

    if (hashmapsum(root, targetSum))
    {
        cout << "path exist" << endl;
    }
    else
    {
        cout << "path does not exist" << endl;
    }
    return 0;
}