#include<stdio.h>

void BubbleSort(int *a,int n)
{
    for(int i = 1; i < n; i++)
    {
        int flag = 0;//To check array is sorted or not
        for(int j = 0; j < n-i; j++)
        {
            if(a[j] > a[j+1])
            {
             //If lesser no is available then swap
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
             //Change flag to show change 
                flag = 1;
            }
        }
        //If array is sorted then break
        if(flag == 0)
            break;
    }
}
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the element for sorting\n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    BubbleSort(a,n);
    printf("\nSorted array....\n");
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
}