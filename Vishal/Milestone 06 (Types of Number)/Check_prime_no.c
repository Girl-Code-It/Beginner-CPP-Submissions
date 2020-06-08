#include<stdio.h>

int main()
{
    int n,flag=1,i;
    printf("Enter the no. \n");
    scanf("%d",&n);
    for(i=2; i<=sqrt(n); i++)
    {
        if((n%i)==0)
        {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("%d is a prime no.",n);
    else
        printf("%d is a composite no.\n",n);

}