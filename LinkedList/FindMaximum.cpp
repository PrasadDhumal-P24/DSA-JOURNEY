// problem: find maximum element in linked list
// logic: temp->dat > maxx
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

    first->data = 10;
    second->data = 70;
    third->data = 30;
    fourth->data = 90;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    node *temp = first;

    int max = temp->data;

    while (temp != NULL)
    {

        if (temp->data > max)
        {
            max = temp->data;
        }
        temp = temp->next;
    }
    cout << max << endl;
    return 0;
}