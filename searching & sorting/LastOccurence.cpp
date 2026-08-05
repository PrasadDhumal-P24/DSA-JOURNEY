// problem: if we find target then we also chech right side
// logic: ans mid, start = mid+1;
// date: day 5

#include <iostream>
using namespace std;
int main()
{

    int arr[] = {3, 5, 5, 5, 7, 9};
    int n = 6;
    int target = 5;
    int st = 0, end = n - 1;

    int ans = -1;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (target == arr[mid])
        {
            ans = mid;
            st = mid + 1;
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