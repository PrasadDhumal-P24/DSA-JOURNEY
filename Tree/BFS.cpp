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

        if (current->left != NULL)
        {
            q.push(current->left);
        }
        if (current->right != NULL)
        {
            q.push(current->right);
        }
    }
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

    levelorder(root);

    return 0;
}