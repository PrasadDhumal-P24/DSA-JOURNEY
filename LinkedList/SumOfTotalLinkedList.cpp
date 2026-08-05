// problem: sum of all nodes
// logic: sum += temp->data
// date: day 2

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

    int sum = 0;

    node *temp = first;
    while (temp != NULL)
    {
        sum +=temp->data;
        temp = temp->next;
    }
    cout << sum << " " << endl;

    return 0;
}