// problem: count total nodes
// logic: take count variable
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

    int count = 0;

    node *temp = first;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
        
    }
    cout << count<< " " << endl;

    return 0;
}