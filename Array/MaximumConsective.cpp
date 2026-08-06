// problem: count how many 1s in array
// logic: count variable & maxcount variable
// date: day 8

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 1, 4, 1, 5, 1};
    int n = 7;
    int count = 0, maxcount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        if (count > maxcount)
        {
            maxcount = count;
        }
        else
        {
            count = 0;
        }
    }
    cout << "max count : " << maxcount << endl;
    return 0;
}