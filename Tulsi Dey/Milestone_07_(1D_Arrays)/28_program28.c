/*
Write a C program to insert an element in an array.

*/
#include <stdio.h>

int main()
{
    int n, k;
    printf("Enter size of array: "); scanf("%d",&n);
    int arr[n], arr1[n+1];

    for(int i = 0; i < n; i++)
    scanf("%d",&arr[i]);


    for(int i = 0; i <= n; i++)
    arr1[i] = arr[i];
    
    printf("Enter your extra element: ");
    scanf("%d",&k);
    arr1[n] = k;
    
    for(int i = 0; i <= n; i++)
    printf("%d ",arr1[i]);
    
    return 0;
}