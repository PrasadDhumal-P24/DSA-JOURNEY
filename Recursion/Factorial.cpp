// problem: fact 1 to n;
// logic: fact n-1
// date: day 2

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{

    cout << factorial(5);
}