// problem: convert uppercase to lowercase
// logic: A = 62 , a = 97
//   ch = ch + 32
// date : day 3

#include <iostream>
using namespace std;

int main()
{

    string s = "PRASAD";

    for (int i = 0; i < s.length(); i++)
    {
        s[i] = s[i] + 32;
    }
    cout << s << endl;
    return 0;
}