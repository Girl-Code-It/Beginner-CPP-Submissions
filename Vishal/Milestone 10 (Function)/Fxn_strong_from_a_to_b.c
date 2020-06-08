//Strong no is a no whose sum of factorial of digits is equal to itself.example : 145 = 1+4!+5!

#include <stdio.h>

int check_Strong(x)
{
    int temp=x,r,c,sum=0;
    while(temp!=0)
    {
        r = temp%10, c=1;
     for(int i=1; i<=r;i++)    
        { c*=i; }
        sum+= c;
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
    printf("Strong no b/w %d and %d are :\n",a,b);

    for(int i=a; i <=b; i++)
    {
        result = check_Strong(i);

        if ( result == 1 )
            printf("%d\n",i);
    }
    return 0;
}




