/*

Write a program to find the sum and product of all elements of an array.

*/
#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    int arr[n];
    for(int i = 0; i < n; i++)
    cin>>arr[i];

    int sum = 0;
    double pdt = 1;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        pdt *= arr[i];
    }

    cout<<"\nSum of all elements: "<<sum;
    cout<<"\nProduct of all elements: "<<pdt;
    return 0;
}