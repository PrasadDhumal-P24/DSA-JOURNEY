// problem: find average of linked list
// logic: sum/count
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
    node *fifth = new node();

    first->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;
    fifth->data = 50;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    int count = 0;
    int sum = 0;

    node *temp = first;

    while (temp != NULL)
    {
        sum += temp->data;
        count++;
        temp = temp->next;
    }
    cout << sum / count << endl;
    return 0;
}
