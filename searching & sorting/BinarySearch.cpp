// problem: searching the element in array
// logic: find mid then compare
// date: day 2

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int tar = 3;
    int st = 0, end = n - 1;
    bool found = false;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] == tar)
        {
            cout << "element found at index " << mid << endl;
            found = true;
            break;
        }
        else if (tar > arr[mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (!found)
    {
        cout << "element not found";
    }
    return 0;
}