#include<stdio.h>

int no_of_digits(int n)
{
    static int count = 0;
       
    if(n != 0)
    {
        no_of_digits(n/10);
        count++;
    }
    return count;
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
   
    printf("Number of digits in %d : %d\n",n,no_of_digits(n));
    return 0;
}