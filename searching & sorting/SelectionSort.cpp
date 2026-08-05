// problem: sort the unsorted array
// logic: push smallest element in sort array
// date: day 2

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 5, 3, 1};
    int n = 4;

    for (int i = 0; i < n - 1; i++)
    {
        int smallest = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < smallest)
            {
                smallest = j;
            }
        }
        swap(arr[i], arr[smallest]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << " sorted array " << arr[i] << endl;
    }
    return 0;
}