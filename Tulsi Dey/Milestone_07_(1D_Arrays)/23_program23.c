/*
Write a C program to find maximum and minimum element in an array. - using recursion.

*/
#include <stdio.h>
#include <limits.h>

int maxArr(int n, int arr[],int max)
{
    if(n == 0) return max;
    if(max < arr[n-1])
    max = arr[n-1];
    return maxArr(n-1,arr,max);
}
int minArr(int n, int arr[],int min)
{
    if(n == 0) return min;
    if(min > arr[n-1])
    min = arr[n-1];
    return minArr(n-1,arr,min);
}
void readArr(int n, int arr[])
{
    if(n == 0) return;
    readArr(n-1,arr);
    int k; scanf("%d",&k);
    arr[n-1] = k;
}
int main()
{
    int n;
    printf("Enter size of array: "); scanf("%d",&n);
    int arr[n];
    readArr(n,arr);
    printf("\nMinimum: %d ",minArr(n,arr,INT_MAX));
    printf("\nMaximum: %d ",maxArr(n,arr,INT_MIN));

    return 0;
}