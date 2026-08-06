// problem: find dublicate element in array
// logic: brute force approch
// date: day 6

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 4, 4, 6};
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "dublicate : " << arr[i] << endl;
                break;
            }
        }
    }
    return 0;
}