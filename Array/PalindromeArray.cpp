// problem: check array is palindrome or not
// logic: use 2 pointers method
// date: day 10;

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {22,11,22};
    int n = 3;
    int start = 0, end = n-1;

    bool isPalindrome = true;

    while(start < end){
        if(arr[start] != arr[end]){
            isPalindrome = false;
            break;

        }
        start++;
        end--;

    }
    if(isPalindrome){
        cout<<"array is palindrome"<<endl;
    }
    else{
        cout<<"array is not palindrome"<<endl;
    }
    return 0;
}