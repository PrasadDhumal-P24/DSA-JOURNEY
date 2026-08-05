// problem: for use maintain sorted order
// logic: if target find return mid then return start after completing loop
// date: day 6

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 3, 5, 6};
    int n = 4;
    int target = 2;
    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (target == arr[mid])
        {
            cout << mid;
            return 0;
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
    cout << st << endl;
    return 0;
}
