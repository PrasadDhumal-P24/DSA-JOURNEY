// problem: search element in linked list
// logic: temp-> == target
// date: day 3

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
    node *fourth = new node();

    first->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    int tar = 20;

    bool found = false;

    node *temp = first;

    while (temp != NULL)
    {

        if (temp->data == tar)
        {
            found = true;
            break;
        }
        temp = temp->next;
    }
    if (found)
    {
        cout << "element found at node";
    }
    else
    {
        cout << "element not found at node";
    }
    return 0;
}