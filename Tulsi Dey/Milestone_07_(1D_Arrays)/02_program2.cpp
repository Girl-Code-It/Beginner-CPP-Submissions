/*

Take 10 integer inputs from user and store them in an array. 
Again ask user to give a number. Now, tell user whether that number is present in array or not.

*/
#include <iostream>

using namespace std;

int main()
{
    int n = 10, k, flag = 0;
    int arr[n];
    
    for(int i = 0; i < n; i++)
    cin>>arr[i];
    cout<<"Enter a number: "; cin>>k;

    for(int i = 0; i < n; i++)
    if(arr[i] == k) 
    {
        flag = 1; break;
    }
    if(flag == 0) cout<<"Sorry number not found";
    else cout<<"Number found!";
    return 0;
}