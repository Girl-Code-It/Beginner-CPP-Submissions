#include<stdio.h>

int main()
{
    int a[10],sum=0,product=1;
    printf("Enter any ten no. :");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        product*=a[i];
    }
    printf("Sum = %d\nProduct = %d\n",sum,product);
    return 0;

}