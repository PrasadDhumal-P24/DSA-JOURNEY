// problem : insert new node at first
//  logic : create new node then fill data then connect node then declare first = new node
//  date : day 6

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

    node *newNode = new node();
    newNode->data = 5;
    newNode->next = first;
    first = newNode;

    node *temp = first;

    while (temp != NULL)
    {

        cout << temp->data << " " << endl;
        temp = temp->next;
    }
    return 0;
}