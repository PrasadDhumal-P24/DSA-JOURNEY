// problem : check stack is full or not
// day : 3

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
        cout << value << " - insert element. " << endl;
    }
}
void isFull()
{
    if (top == 4)
    {
        cout << "stack is full" << endl;
    }
    else
    {
        cout << "stacl is not empty" << endl;
    }
}

int main()
{

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    isFull();

    return 0;
}