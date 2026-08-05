// Problem : insert element at specific position
// logic : create new node then go where you want to insert your element then connect
// date : day 8

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
    third->data = 40;

    first->next = second;
    second->next = third;
    third->next = NULL;

    node *newNode = new node();
    newNode->data = 30;

    node *temp = first;

    for (int i = 1; i < 2; i++)
    {

        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;

    temp = first;

    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}