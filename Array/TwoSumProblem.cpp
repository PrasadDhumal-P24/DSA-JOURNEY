// Problem: find Two sum problem
// logic: brute force approch
// date: day 1

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 7, 11, 15};
    int n = 4;
    int tar = 9;

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; i < n; i++)
        {
            if (arr[i] + arr[j] == tar)
            {
                found = true;
                cout << arr[i] << "+" << arr[j] << "=" << tar;
                break;
            }
        }
        if (!found)
        {
            cout << "no pair found " << endl;
        }
    }
    return 0;
}