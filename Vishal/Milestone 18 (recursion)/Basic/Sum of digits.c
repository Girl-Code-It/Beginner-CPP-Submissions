#include<stdio.h>

int sum_of_digits(int n)
{
    static int sum = 0;
       
    if(n != 0)
    {
        sum += n%10;
        sum_of_digits(n/10);
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
   
    printf("Sum of digits : %d\n",sum_of_digits(n));
    return 0;
}