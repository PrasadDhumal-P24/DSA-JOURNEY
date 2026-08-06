// problem: find eqilibrium index in array
// logic: calculate leftsum and rightsum then calculate
// date: day 1

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 5, 3, 3};
    int n = 5;

    for (int i = 0; i < n; i++)
    {

        int leftsum = 0;
        int rightsum = 0;

        // leftsum calculate
        for (int j = 0; j < i; j++)
        {
            leftsum += arr[j];
        }

        // rightsum calculate
        for (int j = i + 1; j < n; j++)
        {
            rightsum += arr[j];
        }
        if (leftsum == rightsum)
        {
            cout << "eqilibrium index " << i << endl;
            break;
        }
    }
    return 0;
}