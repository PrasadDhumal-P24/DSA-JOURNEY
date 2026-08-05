// problem: if we find target then we also chech left side
// logic: ans mid, end = mid-1;
// date: day 5

#include <iostream>
using namespace std;
int main()
{

    int arr[] = {2, 4, 4, 4, 6, 8};
    int n = 6;
    int target = 4;
    int st = 0, end = n - 1;

    int ans = -1;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (target == arr[mid])
        {
            ans = mid;
            end = mid - 1;
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
    cout << ans;
    return 0;
}