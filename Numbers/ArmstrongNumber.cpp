// problem: cube every digits and check the number are matches original number
// logic: 1st store original number
// then cube
// then add in sum and last compare
// date: day 2

#include <iostream>
using namespace std;

int main()
{

    int num = 153;
    int original = num;
    int sum = 0;

    while (num > 0)
    {
        int digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }
    if (sum == original)
    {
        cout << "armstrong" << endl;
    }
    else
    {
        cout << "not armstrong" << endl;
    }
    return 0;
}
