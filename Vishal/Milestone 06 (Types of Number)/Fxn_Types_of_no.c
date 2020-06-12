//Types of No
#include<stdio.h>

//Prime no is a no which can be divide only by 1 and itself.example : 17

int check_Prime(x)
{
    int flag = 1;
    for(int i=2; i<=sqrt(x); i++)
    {
        if(x%i == 0)
        {
            flag = 0;
            break;
        }
    }
    
    return (flag == 1 ? 1 : 0);
}

//Armstrong no are those no whose sum of cube of digits is equal to itself.example : 370 = 27+343+0

int check_Armstrong(x)
{
    int sum=0,r,temp1=x;
    while(temp1)
    {
        r = temp1%10;
        sum += r*r*r;
        temp1 /= 10;
    }
    
    return (sum == x ? 1 : 0);  
}

//Perfect no are those no whose sum of factors is equal to itself.example : 6 = 1+2+3

int check_Perfect(x)
{
    int sum = 0;
    for(int i=1; i<x; i++)
    {
        if(x%i == 0)
            sum += i;
    }
    
   return (sum == x ? 1 : 0);
}

//Even no is a no who can be divided by 2.example : 46

int check_Even(x)
{
    return (x&1 == 0 ? 1 : 0);
}

//Palindrome no is a no whose reverse is equal to itself.example : 12321

int check_Palindrome(x)
{
    int temp = x,reverse = 0;
    while(temp!=0)
    {
        reverse *= 10;
        reverse += temp%10;
        temp /= 10;
    }
    
   return (x == reverse ? 1 : 0);
}

//Strong no is a no whose sum of factorial of digits is equal to itself.example : 145=1+4!+5!

int check_Strong(x)
{
    int temp=x,r,c,sum=0;
    while(temp)
    {
        r = temp%10, c=1;
        for(int i=1; i<=r; i++)
            c*=i;
            
        sum += c;
        temp /= 10;
    }
    
    return (sum == x ? 1 : 0);
}
void main()
{
    int a,result;
    printf("Enter any no. : ");
    scanf("%d",&a);

    result = check_Prime(a);
    if(result == 1)
        printf("\n%d is a Prime no.\n\n",a);
    else
        printf("\n%d is a Composite no.\n\n",a);

    result = check_Armstrong(a);
    if(result == 1)
        printf("%d is a Armstrong no.\n\n",a);
    else
        printf("%d is not a Armstrong no.\n\n",a);

    result = check_Perfect(a);
    if(result == 1)
        printf("%d is a Perfect no.\n\n",a);
    else
        printf("%d is not a Perfect no.\n\n",a);

    result = check_Even(a);
    if(result == 1)
        printf("%d is a even no.\n\n",a);
    else
        printf("%d is a odd no.\n\n",a);

    result = check_Palindrome(a);
    if(result == 1)
        printf("%d is a Palindrome no.\n\n",a);
    else
        printf("%d is not a Palindrome no.\n\n",a);

    result = check_Strong(a);
    if(result == 1)
        printf("%d is a Strong no.\n\n",a);
    else
        printf("%d is not a strong no.\n\n",a);
}