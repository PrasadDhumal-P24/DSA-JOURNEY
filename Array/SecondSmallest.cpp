// problem: find second smallest element in array
// logic: take 2 variables
// date: day 10

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 5, 6};
    int n = 5;
    int smallest = 0;
    int secondsmallest = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            secondsmallest = smallest;
        }
        else if (arr[i] < secondsmallest && arr[i] != smallest)
        {
            arr[i] = secondsmallest;
        }
        cout << "second smallest : " << secondsmallest << endl;
    }
    return 0;
}