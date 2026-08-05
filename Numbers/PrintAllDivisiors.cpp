// problem: print all numbers to divide perfectly to given numbers
// logic: use a loop from 1 to N and if divide then print
// date: day 4

#include <iostream>
using namespace std;

int main()
{

    int num = 18;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}