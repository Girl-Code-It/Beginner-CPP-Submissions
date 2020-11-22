/*
Write a C program to convert Decimal to Octal number system.

*/
#include <stdio.h>
#include <string.h>

void getBinary(int n)
{
    int oct[20];
    int i = 0, copy = n;
     
    while(n > 0)
    {
        oct[i] = n%8;
        n /= 8;
        i++;
    }

    printf("\nDecimal : %d\nOctal : ",copy);
    for(int j = i - 1; j >= 0; j--)
    if(oct[j] > 9) printf("%c",(char)(oct[j]-10+65));
    else printf("%d",oct[j]);

}
int main()
{
    int n;
    printf("Enter the number: "); scanf("%d",&n);

    getBinary(n);

    return 0;
}