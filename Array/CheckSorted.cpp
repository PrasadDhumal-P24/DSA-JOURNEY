// problem: check array is sorted or not
// logic: arr[i] > arr[i+1]
// date: day 4

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 5, 3, 7};
    int n = 5;
    bool isSorted = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            isSorted = true;
            break;
        }
    }
    if (isSorted)
    {
        cout << "sorted array" << endl;
    }
    else
    {
        cout << "not sorted array" << endl;
    }
    return 0;
}
