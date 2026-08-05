// problem : perform all operation in stack
// day : 2

#include <iostream>
using namespace std;

int stack[5];
int top = -1;

void push(int value)
{
    if (top == 4)
    {
        cout << "stack is overflow" << endl;
    }
    else
    {
        top++;
        stack[top] = value;
        cout << value << " insert into stack. " << endl;
    }
}

void display()
{

    if (top == -1)
    {
        cout << "stack is empty " << endl;
    }
    else
    {
        cout << "stack elements : " << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " " << endl;
        }
    }
}

void peek()
{

    if (top == -1)
    {
        cout << "yes stack is empty " << endl;
    }
    else
    {
        cout << "top element of stack : " << stack[top] << endl;
    }
}

void pop()
{

    if (top == -1)
    {
        cout << "stack is underflow " << endl;
    }
    else
    {
        cout << "pop element : " << stack[top] << endl;
        top--;
    }
}

void isEmpty()
{
    if (top == -1)
    {
        cout << "stack is empty " << endl;
    }
    else
    {
        cout << "No stack is not empty " << endl;
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

    peek();

    pop();

    display();

    isEmpty();

    return 0;
}