//problem: left rotated by 2 steps
//logic: 1st store k element then 2nd shift then 3rd add sorted element
//date: day 6


#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int k = 2;

    int temp[2];

    for(int i = 0; i<k; i++){
        temp[i] = arr[i];
    }
    for(int i = k; i<n; i++){
        arr[i-k] = arr[i];
    }
    for(int i = 0; i<k; i++){
        arr[n-k+1] = temp[i];
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}