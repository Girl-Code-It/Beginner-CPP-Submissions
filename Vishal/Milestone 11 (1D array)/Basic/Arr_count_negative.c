#include<stdio.h>

void Count_negative(int a[],int str,int len)
{
    static int count = 0;
    
    if(str>=len)
    {
        printf("Total no of negative elements are : %d",count);
        return;
    }
    
    if(a[str]<0)
    count++;
    
    Count_negative(a,str+1,len);
}

void main()
{
    int a[50],n,even = 0,odd = 0;
    printf("Enter the no of element : ");
    scanf("%d",&n);

    printf("Enter the elements : ");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    Count_negative(a,0,n);
}