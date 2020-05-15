#include<stdio.h>

void main()
{
    int a[50],n,b,max_diff,min_diff=9999999;
    printf("Enter no of element in 1D matrix : ");
    scanf("%d",&n);
    printf("Enter the element of matrix\n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
        
    //sorting the matrix

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }

    }
    
    max_diff = a[n-1] - a[0];
    printf("Maximum difference is between %d & %d which is equal to %d\n",a[n-1],a[0],max_diff);
       
    for(int i=0;i<n-1;i++)
    {
       if(a[i+1]-a[i]<min_diff) 
       min_diff = a[i+1]-a[i];
    }
    printf("Minimum difference is %d",min_diff);
}