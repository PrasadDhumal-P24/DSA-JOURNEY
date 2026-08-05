// problem: find minimum element in linked list
// logic: temp->dat < maxx
// date: day 4

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

    first->data = 1;
    second->data = 10;
    third->data = 3;
    fourth->data = 8;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    node *temp = first;

    int min = temp->data;

    while (temp != NULL)
    {

        if (temp->data < min)
        {
            min = temp->data;
        }
        temp = temp->next;
    }
    cout << min << endl;
    return 0;
}