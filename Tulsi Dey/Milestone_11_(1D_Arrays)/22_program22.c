/*
Write a C program to find sum of all array elements. - using recursion.

*/
#include <stdio.h>

int sumArr(int n, int arr[],int sum)
{
    if(n == 0) return sum;
    sum += arr[n-1];
    return sumArr(n-1,arr,sum);
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
    printf("%d ",sumArr(n,arr,0));

    return 0;
}