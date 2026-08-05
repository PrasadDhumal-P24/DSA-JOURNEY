// problem: if you reverse string and is also as it is then pallindrome
// logic: compare first character vs last character
// date : day 2

#include <iostream>
using namespace std;

int main()
{
    string s = "prasad";
    int st = 0, end = s.length() - 1;

    bool palindrome = true;

    while (st < end)
    {
        if (s[st] != s[end])
        {
            palindrome = false;
            break;
        }
        st++;
        end--;
    }
    if (palindrome)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palindrome";
    }
    return 0;
}
