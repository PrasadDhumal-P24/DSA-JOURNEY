#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 3, 5, 7, 9, 11, 15};
    int n = 7;
    int target = 8;
    int st = 0, end = n - 1;
    bool found = false;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (target == arr[mid])
        {
            cout << "element found at index " << mid << endl;
            break;
            found = true;
        }
        else if (target > arr[mid])
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
        cout << -1;
    }
    return 0;
}