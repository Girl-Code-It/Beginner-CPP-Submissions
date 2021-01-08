/*

Take 20 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of 0.

*/
#include <iostream>

using namespace std;

int main()
{
    int n = 20;
    int arr[n];
    for(int i = 0; i < n; i++)
    cin>>arr[i];
    
    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0, zeroCount = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > 0) positiveCount++;
        if(arr[i] < 0) negativeCount++;
        if(arr[i]%2 == 0) evenCount++;
        if(arr[i]%2 != 0) oddCount++;
        if(arr[i] == 0) zeroCount++;
    }
    cout<<"\nnumber of positive numbers: "<<positiveCount;
    cout<<"\nnumber of negative numbers: "<<negativeCount;
    cout<<"\nnumber of odd numbers: "<<oddCount;
    cout<<"\nnumber of even numbers: "<<evenCount;
    cout<<"\nnumber of zeros: "<<zeroCount;
    return 0;
}