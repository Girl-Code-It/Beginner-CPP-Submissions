#include<stdio.h>

void main()
{
    int a[20],b,count0 = 0,countpos = 0,countneg = 0,counteven = 0,countodd = 0;
    printf("Enter any twenty no. :");
    for(int i=0; i<20; i++)
        scanf("%d",&a[i]);

    for(int i=0; i<20; i++)
    {
        if(a[i]==0)
            count0++;
        if(a[i]>0)
            countpos++;
        if(a[i]<0)
            countneg++;
        if(a[i]%2!=0)
            countodd++;
        if(a[i]%2==0)
            counteven++;
    }
    printf("No. of Zeroes is %d\n",count0);
    printf("\nNo. of positive integers is %d\n",countpos);
    printf("\nNo. of negative integers is %d\n",countneg);
    printf("\nNo. of odd number is %d\n",countodd);
    printf("\nNo. of even number is %d\n",counteven);
}