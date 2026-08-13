// Problem: find Two sum problem
// logic: brute force approch
// date: day 1

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {10, 3, 20, 40};
    int n = 4;
    int target = 13;

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; i < n; i++)
        {
            if (arr[i] + arr[j] == target)
            {
                found = true;
                cout << arr[i] << "+" << arr[j] << "=" << target << endl;
                break;
            }
            if (!found)
            {
                cout << "sum are not found" << endl;
            }
        }
    }
    return 0;
}