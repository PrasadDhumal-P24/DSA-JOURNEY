// problem: remove dublicates element in sorted array
// logic: store unique element in new array and compare previous element
// date: day 12;

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7;
    int temp[7];
    int j = 0;

    temp[j++] == arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            temp[j++] = arr[i];
        }
    }

    for (int i = 0; i < j; j++)
    {
        cout << temp[i] << " " << endl;
        break;
    }

    return 0;
}
