// problem: count total words in string
// logic: underscore = space => words = space+1
// date : day 4

#include <iostream>
using namespace std;

int main()
{

    string s = "i love DSA";
    int spaces = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            spaces++;
        }
    }
    cout << spaces + 1 << endl;
    return 0;
}