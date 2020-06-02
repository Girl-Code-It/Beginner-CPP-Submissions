//Perfect no are those no whose sum of factors is equal to itself.example : 6 = 1+2+3

#include <stdio.h>

int check_Perfect(x)
{
    int sum = 0;
    for(int i=1;i<x;i++)
    {
        if(x%i==0)
        sum+=i;
    }
    if(sum==x)
    return 1;
    else
    return 0;
}

void main()
{
    int a,b,result;

    printf("Enter the upper limit : ");
    scanf("%d",&b);
    printf("Enter the lower limit : ");
    scanf("%d",&a);
    printf("Perfect no b/w %d and %d are\n",a,b);

    for(int i=a; i <=b; i++)
    {
        result = check_Perfect(i);

        if ( result == 1 )
            printf("%d\n",i);
    }
    return 0;
}




