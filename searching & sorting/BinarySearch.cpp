// problem: searching the element in array
// logic: find mid then compare
// date: day 2

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int target = 2;
    int start = 0, end = n - 1;
    bool found = false;

    while (start <= end)
    {

        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            found = true;
            cout << "element found = " << target << endl;
            break;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (!found)
    {
        cout << "element not found" << endl;
    }
    return 0;
}