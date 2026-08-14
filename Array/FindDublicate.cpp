// problem: find dublicate element in array
// logic: brute force approch
// date: day 6

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 4, 6, 6, 8};
    int n = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "dublicate = " << arr[i] << endl;
                break;
            }
        }
    }
    return 0;
}
