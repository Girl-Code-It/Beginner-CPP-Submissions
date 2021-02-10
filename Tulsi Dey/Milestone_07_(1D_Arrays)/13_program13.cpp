/*
Take an array of length n where all the numbers are nonnegative and unique. 
Find the element in the array possessing the highest value. Split the element 
into two parts where first part contains the next highest value in the array and 
second part hold the required additive entity to get the highest value. Print the 
array where the highest value get splitted into those two parts.

Sample input: 4 8 6 3 2
Sample output: 4 6 2 6 3 2

*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: "; cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++)
    cin>>arr[i];

    int max = arr[0], max2 = arr[0];
    
    for(int i = 0; i < n; i++)
    if(arr[max] < arr[i])
    max = i;

    for(int i = 0; i < n; i++)
    if(max2 < arr[i] && arr[i] != arr[max])
    max2 = arr[i];
    
    int k = 0;
    int m[n+1];

    for(int i = 0; i < n+1; i++)
    {

        if(i == max) m[i] = max2;
        else if(i == max+1)
        {
            m[i] = arr[max] - max2;
            k++;
        }
        else m[i] = arr[k++];
    }
    

    for(int i = 0; i < n+1; i++)
    cout<<m[i]<<" ";

    return 0;
}