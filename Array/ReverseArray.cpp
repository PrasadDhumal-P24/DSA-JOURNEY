// problem: reverse the array
// logic: swaping
// date : day 3

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int st = 0, end = n - 1;

    while (st < end)
    {
        swap(arr[st], arr[end]);
        st++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "reverse array";
        cout << arr[i] << " " << endl;
    }
    return 0;
}