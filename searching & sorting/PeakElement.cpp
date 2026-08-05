// problem: find peak element in array make sure this element is greather than left and element and right side element
// logic: brute force apporch
// date: day 6

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {3, 5, 20, 7, 9};
    int n = 5;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            cout << "peak" << arr[i];
            break;
        }
    }
    return 0;
}