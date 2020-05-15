#include<stdio.h>

void SelectionSort(int *a,int n)
{
    for(int i=0; i < n-1; i++)//we need to n-2 pass 
    {
        int min = i;//To check min value from i to n-1
        for(int j = i+1; j<n; j++)
        {
            if(a[j] < a[min])
                min = j;
        }
        //Swap with minimum value
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element for sorting\n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    SelectionSort(a,n);
    printf("Sorted array....\n");
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
}