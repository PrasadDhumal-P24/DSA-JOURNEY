// problem: find largest and smallest element in array
// logic: use 2 variable and 2 if condition
// date: day 12

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 4, 6, 7, 3, 9};
    int n = 6;
    int maxvalue = 0;
    int minvalue = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxvalue)
        {
            maxvalue = arr[i];
        }
        if (arr[i] < minvalue)
        {
            minvalue = arr[i];
        }
    }
    
    cout << "largest " << maxvalue << endl;
    cout << "smallest " << minvalue << endl;
    
    return 0;

}