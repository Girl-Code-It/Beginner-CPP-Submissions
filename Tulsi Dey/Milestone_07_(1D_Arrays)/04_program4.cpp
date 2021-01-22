/*

Take 10 integer inputs from user and store them in an array. Now, copy all the elements in another 
array but in reverse order.

*/
#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    int arr[n], brr[n];
    for(int i = 0; i < n; i++)
    cin>>arr[i];

    for(int i = 0; i < n; i++)
    brr[n-1-i] = arr[i];

    for(int i = 0; i < n; i++)
    cout<<brr[i]<<" ";
    return 0;
}