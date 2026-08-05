#include <iostream>
using namespace std;

int main()
{
    string s = "PrAsAd";
    int uppercount = 0;
    int lowercount = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            uppercount++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            lowercount++;
        }
    }
    cout << "uppercount" << uppercount << endl;
    cout << "lowercount" << lowercount << endl;
    return 0;
}
