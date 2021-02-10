/*
Write a C program to copy all elements from an array to another array.

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: "); scanf("%d",&n);
    int arr[n], arr1[n];

    for(int i = 0; i < n; i++)
    scanf("%d",&arr[i]);

    for(int i = 0; i < n; i++)
    arr1[i] = arr[i];
    
    for(int i = 0; i < n; i++)
    printf("%d ",arr1[i]);
    
    return 0;
}