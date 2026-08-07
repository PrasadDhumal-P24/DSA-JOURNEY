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

// void levelorder(node *root)
// {

//     if (root == NULL)
//     {
//         return;
//     }
//     queue<node *> q;

//     q.push(root);

//     while (!q.empty())
//     {
//         node *current = q.front();
//         q.pop();
//         cout << current->data << " ";

//         if (current->left != NULL)
//         {
//             q.push(current->left);
//         }
//         if (current->right != NULL)
//         {
//             q.push(current->right);
//         }
//     }
// }

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

bool search(node *root, int key)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == key)
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

    node *root = NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    // levelorder(root);

    if (search(root, 60))
    {
        cout << "element found";
    }
    else
    {
        cout << "element not found";
    }

    return 0;
}