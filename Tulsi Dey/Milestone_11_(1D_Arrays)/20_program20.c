/*
Write a C program to read and print elements of array. - using recursion.

*/
#include <stdio.h>

void printArr(int n, int arr[])
{
    if(n == 0) return;
    printArr(n-1,arr);
    printf("%d ",arr[n-1]);
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
    int n;;
    printf("Enter size of array: "); scanf("%d",&n);
    int arr[n];
    readArr(n,arr);
    printArr(n,arr);

    return 0;
}
