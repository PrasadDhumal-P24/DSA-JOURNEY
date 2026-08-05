#include <iostream>
using namespace std;

int queue[5];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == 4)
    {
        cout << "queue is overflow" << endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        cout << value << " - inserte into queue " << endl;
    }
}
void display()
{
    if (front == -1)
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "queues element : " << endl;
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

void Dequeue()
{
    if (front == rear)
    {
        cout << "queue is underflow" << endl;
    }
    else
    {

        cout << "Dequeue element " << queue[front] << endl;
        front++;
    }
}
int main()
{
    enqueue(5);
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    Dequeue();

    display();

    return 0;
}