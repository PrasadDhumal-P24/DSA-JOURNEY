// problem: find second largest element in array
// logic: comparing array and largest and secondlargest
// date: day 3

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 4, 6, 8, 1};
    int n = 5;
    int largest = 0, secondlargest = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest && arr[i] != largest)
        {
            secondlargest = arr[i];
        }
    }
    cout << "second largest" << secondlargest;
    return 0;
}