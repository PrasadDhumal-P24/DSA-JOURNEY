// problem: check prime number or not
// logic: 1st compare
// then start loop from 2
// then compare and check
// date: day 2

#include <iostream>
using namespace std;

int main()
{

    int num = 7;
    bool isPrime = true;

    if (num <= 1)
    {
        isPrime = false;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "prime number";
    }
    else
    {
        cout << "not prime number";
    }
    return 0;
}
