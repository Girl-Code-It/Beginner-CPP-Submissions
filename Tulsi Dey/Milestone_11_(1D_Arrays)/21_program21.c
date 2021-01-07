/*
Write a C program to print all negative elements in an array.

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: "); scanf("%d",&n);
    int arr[n];

    for(int i = 0; i < n; i++)
    scanf("%d",&arr[i]);

    for(int i = 0; i < n; i++)
    if(arr[i] < 0)
    printf("%d ",arr[i]);
    
    return 0;
}