#include<stdio.h>

int findFloor(int *arr,int n,int x)
{
    static int i = 0;
    if(i == n)
        return arr[n-1];

    if(arr[i] >= x && arr[i-1] < x)
        return arr[i-1];

    i++;
    findFloor(arr,n,x);
}

int main()
{
    int n,x;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the element\n");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    printf("Enter the no to find its floor value : ");
    scanf("%d",&x);

    printf("%d\n",findFloor(arr,n,x));

    return 0;
}