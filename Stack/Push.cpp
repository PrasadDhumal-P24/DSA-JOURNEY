// problem : push operation -> add element in stack
// date : day 1

#include <iostream>
using namespace std;

int stack[5];
int top = -1;

void push(int value)
{
    if (top == 4)
    {
        cout << "stack is overflow" << endl;
        ;
    }
    else
    {
        top++;
        stack[top] = value;
        cout << value << " insert into stack." << endl;
    }
}

void display()
{
    if (top == -1)
    {
        cout << " stack is empty " << endl;
    }
    else
    {
        cout <<  "stack element: ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " " << endl;
        }
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    display();

    return 0;
}

