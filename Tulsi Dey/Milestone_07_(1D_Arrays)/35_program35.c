/*
Write a C program to find reverse of an array.

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
    printf("%d ",arr[n - 1 - i]);
    
    return 0;
}