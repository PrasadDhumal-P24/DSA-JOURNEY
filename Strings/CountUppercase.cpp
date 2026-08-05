// problem: count uppercase in string
// logic: ch >= 'A' && ch >= 'Z'
// date : day 3

#include <iostream>
using namespace std;

int main()
{

    string s = "PrAsAd";
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
