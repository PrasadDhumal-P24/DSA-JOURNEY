// problem: count total digits in string
// logic: 0-->9
// date : day 4

#include <iostream>
using namespace std;

int main()
{

    string s = "Prasad2424";
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}