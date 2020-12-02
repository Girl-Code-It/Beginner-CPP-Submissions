/*
Write a C program to convert Decimal to Binary number system.

*/
#include <stdio.h>
#include <string.h>

void getBinary(int n)
{
    int bin[20];
    int i = 0, copy = n;
     
    while(n > 0)
    {
        bin[i] = n%2;
        n /= 2;
        i++;
    }

    printf("\nDecimal : %d\nBinary : ",copy);
    for(int j = i - 1; j >= 0; j--)
    printf("%d",bin[j]);

}
int main()
{
    int n;
    printf("Enter the number: "); scanf("%d",&n);

    getBinary(n);

    return 0;
}