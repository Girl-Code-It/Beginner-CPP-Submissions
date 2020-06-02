/*
1. Take an array of length n where all the numbers are nonnegative and unique.
Find the element in the array possessing the highest value.
Split the element into two parts where first part contains the next highest value in
the array and second part hold the required additive entity to get the highest value.
Print the array where the highest value get splitted into those two parts.
Sample input: 4 8 6 3 2
Sample output: 4 6 2 6 3 2
*/
#include <iostream>
using namespace std;
int main ()
{
    int a[99], n, i, size, s;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " <<size<< " elements: ";
    for(n = 0; n < size; n++)
    {
        cin >> a[n];
    }
    int largest = a[0];
    for (n = 0; n < size; n++)
    {
        if (largest < a[n])
        {
             largest = a[n];
             i = n;
        }
    }
    int secondLargest;
    if(i==size-1)
        secondLargest = a[i-1];
    else
        secondLargest = a[i+1];
    for (n = 0; n < size; n++)
    {
        if (a[n]<largest && a[n]>secondLargest)
        {
                secondLargest = a[n];
        }
    }
    for (n =0; n <=size; n++)
    {
        if (n == i)
            a[n] = secondLargest;
        else if (n == i+1)
            a[n] = largest - secondLargest;
        else if(n>i+1)
            a[n] = a[n-1];
        else
            a[n] = a[n];
    }
    for (n = 0; n <= size; n++)
    {
        cout<<a[n]<<" ";
    }
}
