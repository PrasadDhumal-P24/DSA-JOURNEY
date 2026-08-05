// problem: reverse the number
// logic: 1st get last digit = num%10
// 2nd reverse build = rev rev*10+digit
// 3rd minus number = n/10
// date: day 1

#include <iostream>
using namespace std;

int main()
{
    int num = 12345;
    int rev = 0;

    while (num > 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    cout << "reverse : " << rev << endl;
    return 0;
}