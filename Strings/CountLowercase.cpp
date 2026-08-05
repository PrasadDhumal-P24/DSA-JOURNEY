// problem: count lowercase in string
// logic: ch >= 'a' && ch >= 'z'
// date : day 3

#include <iostream>
using namespace std;

int main()
{

    string s = "PrAsAd";
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
