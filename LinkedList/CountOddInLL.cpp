// problem: count odd numbers in linked list
// logic: temp->data % 2 != 0
// date: day 5

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
    node* fifth = new node();

    first->data = 10;
    second->data = 15;
    third->data = 30;
    fourth->data = 18;
    fifth->data = 23;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;


    int count = 0;

    node *temp = first;

    

    while (temp != NULL)
    {

        if (temp->data % 2 != 0)
        {
            count++;
        }
        temp = temp->next;
    }
    cout <<"odd is : "<<count<< endl;
    return 0;
}