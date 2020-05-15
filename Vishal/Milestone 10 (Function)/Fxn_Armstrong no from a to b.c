//Armstrong no is a no whose sum of cube of digits is equal to itself.example : 370 = 27+343+0

#include <stdio.h>

int check_Armstrong(x)
{
    int sum=0,r,count=0,temp=x;
    while(temp > 0)
    {
        r = temp%10;
        sum+= r*r*r;
        temp/=10;
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
    printf("Armstrong no b/w %d and %d are\n",a,b);

    for(int i=a; i <=b; i++)
    {
        result = check_Armstrong(i);

        if ( result == 1 )
            printf("%d\n",i);
    }
    return 0;
}




