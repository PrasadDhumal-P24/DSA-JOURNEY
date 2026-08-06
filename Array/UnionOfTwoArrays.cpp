// problem: combine unique element
// logic: brute force approch & dublicate remove karayche
// date: day 7

#include <iostream>
#include <set>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {2, 3, 4};

    int n1 = 3, n2 = 3;
    set<int> s;

    for (int i = 0; i < n1; i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        s.insert(arr2[i]);
    }
    for (auto it : s)
    {
        cout << it << " ";
    }
    return 0;
}