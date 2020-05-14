#include<stdio.h>

void DecToBin(unsigned int n)
{
    if(n > 1)
        DecToBin(n/2);

    printf("%d",n%2);
}

//Check the no is  power of 2 or not
int main()
{
    unsigned int n;
    printf("Enter the Number : ");
    scanf("%u",&n);

    printf("\nIn Binary Form : ");
    DecToBin(n);
    if(n & (n-1) == 0)
        printf("\n\n%u is a power of 2.\n",n);
    else
        printf("\n\n%u is not a power of 2.\n",n);
    return 0;
}