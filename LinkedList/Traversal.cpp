// problem: traverse full node
// logic: use a variable and store first valuele
// date: day 1



#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;
};

int main()
{

    node *first = new node();
    node *second = new node();
    node *third = new node();

    first->data = 10;
    second->data = 20;
    third->data = 30;

    first->next = second;
    second->next = third;
    third->next = NULL;

    node *temp = first;
    while (temp != NULL)
    {
        cout << temp->data << " " << endl;
        temp = temp->next;
    }

    return 0;
}