// problem: sorting the unsorted array in less time or less operation
// logic: use swapped method
// date: day 4

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 2, 4, 5};
    int n = 5;

    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}
