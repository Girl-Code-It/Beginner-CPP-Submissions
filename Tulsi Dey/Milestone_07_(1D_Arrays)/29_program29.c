/*
Write a C program to delete an element from an array at specified position.

*/
#include <stdio.h>

int main()
{
    int n, k, index = 0;
    printf("Enter size of array: "); scanf("%d",&n);
    int arr[n], arr1[n-1];

    for(int i = 0; i < n; i++)
    scanf("%d",&arr[i]);

    printf("Enter the index to be deleted: ");
    scanf("%d",&k);

    for(int i = 0; i <= n; i++)
    {
        if(i == k)  index++;
        arr1[i] = arr[index++];
    }
    
    for(int i = 0; i < n - 1; i++)
    printf("%d ",arr1[i]);
    
    return 0;
}