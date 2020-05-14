#include<stdio.h>

void main()
{
   int n,a[n],b[n+1],j=0;
    printf("Enter the no of element : ");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    int highest = a[0];
    int sec_highest = a[0];
    
    //finding highest and second highest no
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>highest)
        {
           highest = a[i];
                 j = i;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<highest&&a[i]>sec_highest)
         { sec_highest = a[i];}
    }
    
    //Assign this elements another matrix
    
    for(int i=0;i<j;i++)
    b[i] = a[i];
    
    b[j] = sec_highest;
    b[j+1] = highest - sec_highest;
    
    for(int i=j+2;i<n+1;i++)
    b[i] = a[i-1];
    
    //Print output array
    
    for(int i=0;i<n+1;i++)
    printf("%d ",b[i]);
}