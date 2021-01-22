/*
Write a C program to count total number of even and odd elements in an array.

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: "); scanf("%d",&n);
    int arr[n];

    for(int i = 0; i < n; i++)
    scanf("%d",&arr[i]);

    int evenCount = 0, oddCount = 0;

    for(int i = 0; i < n; i++)
    if(arr[i]&1 != 0) oddCount++;
    else evenCount++;

    printf("\nEven count: %d",evenCount);
    printf("\nOdd count: %d",oddCount);
    return 0;
}