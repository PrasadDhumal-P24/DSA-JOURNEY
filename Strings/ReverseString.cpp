// problem: reverse the string
// logic: swaping condition
// date : day 2

#include <iostream>
using namespace std;

int main()
{
    string s = "prasad";
    int st = 0, end = s.length() - 1;

    while (st < end)
    {
        swap(s[st], s[end]);
        st++;
        end--;
    }
    cout << s << endl;
    return 0;
}