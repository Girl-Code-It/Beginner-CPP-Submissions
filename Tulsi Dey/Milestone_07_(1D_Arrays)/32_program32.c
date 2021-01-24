/*
Write a C program to count total number of duplicate elements in an array.

*/
#include <stdio.h>

int main()
{
    int n, duplicate = 0;
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
    if(freq[i] == 0)
    duplicate++;

    printf("Total duplictes: %d",duplicate);
    
    return 0;
}