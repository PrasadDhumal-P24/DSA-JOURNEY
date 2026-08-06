// problem: find missing number in array
// logic: expected sum - actual sum
// date: day 5

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = size + 1;

    int expectedsum = n * (n + 1) / 2;
    int actualsum = 0;

    for (int i = 0; i < size; i++)
    {
        actualsum += arr[i];
    }
    int missing = expectedsum - actualsum;

    cout << "missing : " << missing;
    return 0;
}