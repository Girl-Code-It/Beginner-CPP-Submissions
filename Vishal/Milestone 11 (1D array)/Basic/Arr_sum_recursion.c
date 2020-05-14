#include<stdio.h>

void sum_array_element(int a[],int str,int len)
{
    static int sum = 0;

    if(str>=len)
    {
        printf("%d",sum);
        return;
    }

    sum += a[str];

    sum_array_element(a,str+1,len);
}
void main()
{
    int a[50],n;
    printf("Enter the no of element : ");
    scanf("%d",&n);

    printf("Enter the elements : ");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("Sum of elements is : ");
    sum_array_element(a,0,n);
}