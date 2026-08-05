// problem: count vowel in string
// logic: check a,e,i,o,u
// date : day 1

#include <iostream>
using namespace std;

int main()
{

    string str = "prasad";
    int vowelCount = 0;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == '0' || ch == 'u')
        {
            vowelCount++;
        }
    }
    cout << "vowel count " << vowelCount << endl;
    return 0;
}