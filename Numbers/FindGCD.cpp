// problem: the biggest number of divide 2 common numbers
// logic: use loop from 1 to minimum(num1 and num2) if divide then update
// date: day 4

#include <iostream>
using namespace std;

int main()
{
    int num1 = 20;
    int num2 = 18;

    int GCD = 1;

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            GCD = i;
        }
    }
    cout << "GCD is " << GCD << endl;
    return 0;
}