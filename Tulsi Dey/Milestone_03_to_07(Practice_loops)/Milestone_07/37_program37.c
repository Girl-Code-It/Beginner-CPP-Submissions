/*
Write a C program to convert Decimal to Hexadecimal number system.

*/
#include <stdio.h>
#include <string.h>

void getBinary(int n)
{
    char hex[20];
    int i = 0, copy = n;
     
    while(n > 0)
    {
        hex[i] = n%16;
        n /= 16;
        i++;
    }

    printf("\nDecimal : %d\nHexadecimal : ",copy);
    for(int j = i - 1; j >= 0; j--)
    if(hex[j] > 9) printf("%c",(char)(hex[j]-10+65));
    else printf("%d",hex[j]);

}
int main()
{
    int n;
    printf("Enter the number: "); scanf("%d",&n);

    getBinary(n);

    return 0;
}