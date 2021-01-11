/*
Write a C program to count total number of negative elements in an array.

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: "); scanf("%d",&n);
    int arr[n];

    for(int i = 0; i < n; i++)
    scanf("%d",&arr[i]);
    
    int count = 0;

    for(int i = 0; i < n; i++)
    if(arr[i] < 0)
    count++;

    printf("Total negative numbers: %d",count);
    
    return 0;
}