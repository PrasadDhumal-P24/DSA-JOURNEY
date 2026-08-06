// problem: print the element that how many shows in array
// logic: use 3 loop and then see count or not
// date: day 9

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 2, 3, 4, 5, 5, 6, 1, 2};
    int n = 9;

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        bool alreadycounted = false;

        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                alreadycounted = true;
                break;
            }
        }
        if (alreadycounted)

            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        cout << arr[i] << "->" << count << "times" << endl;
    }

    return 0;
}