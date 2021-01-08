/*
Write a C program to find second largest element in an array.

*/
#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    printf("Enter size of array: "); scanf("%d",&n);
    int arr[n];

    for(int i = 0; i < n; i++)
    scanf("%d",&arr[i]);

    int max, max2;
    max = max2 = INT_MIN;

    for(int i = 0; i < n; i++)
    if(max < arr[i])
    max = arr[i];

    for(int i = 0; i < n; i++)
    if(max2 < arr[i] && arr[i] != max)
    max2 = arr[i];

    printf("Second largest number: %d",max2);
    return 0;
}