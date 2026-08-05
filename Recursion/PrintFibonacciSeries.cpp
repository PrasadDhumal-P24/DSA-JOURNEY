// problem: print fibonacci series
// logic: sum peevious and current number
// date: day 3

#include <iostream>
using namespace std;

int main()
{

    int n = 8;

    int a = 0;
    int b = 1;

    cout << a << " " << b << endl;
    for (int i = 2; i < n; i++)
    {
        int next = a + b;

        cout << next << " " << endl;

        a = b;
        b = next;
    }
    return 0;
}