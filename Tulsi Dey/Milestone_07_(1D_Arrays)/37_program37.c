/*
Write a C program to search an element in an array.

*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, k;
    bool flag = false;
    printf("Enter size of array: "); scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    scanf("%d",&arr[i]);

    printf("Enter element to be searched: "); scanf("%d",&k);

    for(int i = 0; i < n; i++)
    if(arr[i] == k)
    {
        flag = true;
        break;
    }

    if(flag) printf("Found!");
    else printf("Not Found!");

    
    return 0;
}