// problem: print fibonacci series
// logic: sum peivious and current element
// date: day 4

#include <iostream>
using namespace std;

int main()
{

    int n = 8;

    int a = 0;
    int b = 1;

    for (int i = 2; i < n; i++)
    {

        int next = a + b;

        cout << next << " " << endl;

        a = b;
        b = next;
    }
    return 0;
}