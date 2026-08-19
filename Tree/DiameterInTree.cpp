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

int height(node *root, int &Diameter)
{

    if (root == NULL)
    {
        return 0;
    }

    int leftHeight = height(root->left, Diameter);
    int rightHeight = height(root->right, Diameter);

    int currentDiameter = leftHeight + rightHeight + 1;

    Diameter = max(Diameter, currentDiameter);

    return 1 + max(leftHeight, rightHeight);
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
    root->left->left->left = new node(45);

    int Diameter = 0;

    height(root, Diameter);

    cout << " Diameter is " << Diameter << endl;
}