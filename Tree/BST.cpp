#include <iostream>
#include <queue>
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

void levelorder(node *root)
{

    if (root == NULL)
    {
        return;
    }
    queue<node *> q;

    q.push(root);

    while (!q.empty())
    {
        node *current = q.front();
        q.pop();
        cout << current->data << " ";

        {
            q.push(current->left);
        }
        if (current->right != NULL)
        {
            q.push(current->right);
        }
    }
}

node *insert(node *root, int value)
{
    if (root == NULL)
    {
        return new node(value);
    }

    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }
    return root;
}

int main()
{

    node *root = NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    levelorder(root);

    return 0;
}