// problem: print nth fibonacci number
// logic: fib(6) = fib(5) + fib(4)
// date: day 3

#include <iostream>
using namespace std;

int fib(int n)
{

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{

    cout << fib(6);
}
