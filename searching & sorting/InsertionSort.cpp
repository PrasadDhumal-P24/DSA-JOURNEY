// problem: sort the unsorted array using insertion sory method
// logic: store current then compare previous then insert element in correct position
// date: day 3

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {9, 6, 8, 2, 5};
    int n = 5;

    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}
