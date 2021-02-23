/*
Write a C program to sort even and odd elements of array separately.

*/
#include <stdio.h>

int getMax(int arr[], int n)
{
    int max = arr[0];

    for(int i = 0; i < n; i++)
    if(max < arr[i]) max = arr[i];

    return max;
}
void arrange(int arr[], int n, int max)
{
    int c = 0;
    for(int i = 0; i < n; i++)
    if((arr[i]%max)%2 == 0)
    arr[c++] += arr[i]%max*max; 

    for(int i = 0; i < n; i++)
    if((arr[i]%max)%2 != 0)
    arr[c++] += arr[i]%max*max;
}
void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            arr[j] = arr[j]^arr[j+1]^(arr[j+1] = arr[j]);
        }
    }
}
int main()
{
    int n;
    printf("Enter size of array: "); scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    scanf("%d",&arr[i]);

    int max = getMax(arr,n);
    if(++max%2 == 0) max++;

    bubbleSort(arr,n);
    arrange(arr,n,max);

    for(int i = 0; i < n; i++)
    printf("%d ",arr[i]/max);

    return 0;
}