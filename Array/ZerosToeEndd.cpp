// problem: move all zeros to end
// logic: swaping condition lavaychi
// date: day 7

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 0, 2, 0, 3, 0};
    int n = 6;
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}