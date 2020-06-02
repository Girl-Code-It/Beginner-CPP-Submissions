#include<stdio.h>

int check_even(x)
{
    if(x%2==0)
        return 1;
    else
        return 0;
}

void main()
{
    int a,result;
    printf("Enter any two integers : ");
    scanf("%d",&a);

    result = check_even(a);
    if(result == 1)
        printf("%d is even no.\n",a);
    else
        printf("%d is odd no.\n",a);
}