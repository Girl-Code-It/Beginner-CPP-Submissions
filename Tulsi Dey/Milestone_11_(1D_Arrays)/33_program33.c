/*
Write a C program to delete all duplicate elements from an array.

*/
#include <stdio.h>

int main()
{
    int n, duplicate = 0;
    printf("Enter size of array: "); scanf("%d",&n);
    int arr[n];
   
    for(int i = 0; i < n; i++)
    scanf("%d",&arr[i]);
    

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
           
        if(arr[i] == arr[j])
        {
            for(int k = i; k < n; k++)
            arr[k] = arr[k+1];

            n--;
            j--;
        }
        }
    }

    for(int i = 0; i < n; i++)
    printf("%d ",arr[i]);
    
    return 0;
}