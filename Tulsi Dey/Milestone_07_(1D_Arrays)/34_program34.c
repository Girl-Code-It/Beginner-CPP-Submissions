/*
Write a C program to merge two array to third array.

*/
#include <stdio.h>

int main()
{
    int n, m;

    printf("Enter size of first array: "); scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    scanf("%d",&arr[i]);

    printf("Enter size of second array: "); scanf("%d",&m);
    int brr[m];
    for(int i = 0; i < m; i++)
    scanf("%d",&brr[i]);

    int mrr[n+m];
    

    for(int i = 0; i < n; i++)
    mrr[i] = arr[i];

    for(int i = 0; i < m; i++)
    mrr[i+n] = brr[i];

    for(int i = 0; i < n + m; i++)
    printf("%d ",mrr[i]);
    
    return 0;
}