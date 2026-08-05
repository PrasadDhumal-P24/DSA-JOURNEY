// problem: searching element in array
// logic: if find target then print it
// date: day 1

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 4, 5, 11, 56};
    int n = 5;
    int tar = 66;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == tar)
        {
            cout << "element found at index" << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "element not found " << endl;
    }
    else
    {
        cout << "element not found";
    }
    return 0;
}