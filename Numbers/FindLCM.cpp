// problem: the smallest number of divisible by 2 common numbers
// logic: chech our condition is true or not and divisible or not
// date: day 4

#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    int MaxNum = (a > b) ? a : b;

    while (true)
    {
        if (MaxNum % a == 0 && MaxNum % b == 0)
        {
            cout << "LCM is " << MaxNum << endl;
            break;
        }
        MaxNum++;
    }
    return 0;
}