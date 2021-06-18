/*
Write a C program to put even and odd elements of array in two separate array.

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: "); scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    scanf("%d",&arr[i]);

    int k = 0, j = 0;
    int even[100], odd[100];

    for(int i = 0; i < n; i++)
    if(arr[i]&1 != 0) odd[j++] = arr[i];
    else even[k++] = arr[i];

    for(int i = 0; i < k; i++)
    printf("%d ",even[i]);

    printf("\n");

    for(int i = 0; i < j; i++)
    printf("%d ",odd[i]);
    
    return 0;
}