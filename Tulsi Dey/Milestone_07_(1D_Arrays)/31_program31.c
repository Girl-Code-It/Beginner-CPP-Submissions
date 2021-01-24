/*
Write a C program to print all unique elements in the array.

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: "); scanf("%d",&n);
    int arr[n], freq[n];
   
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        freq[i] = -1;
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])  
            freq[j] = 0;
        }
    }
    
    for(int i = 0; i < n; i++)
    if(freq[i] != 0)
    printf("%d ",arr[i]);
    
    return 0;
}