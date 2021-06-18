/*
Write a C program to convert Binary to Octal number system.

*/
#include <stdio.h>
#include <math.h>
#include <string.h>

void getOct(char *n)
{
    char oct[20] = "";
    int aux;

    for(int i = 0; i < strlen(n); i++)
    {
      aux += (n[strlen(n)-1-i] - '0') * pow(2,i);
    }
    for(int i = 0; aux > 0; i++)
    {
        if(aux%8 > 9) 
        oct[i] = (aux%8 + 65 - 10);
        else
        oct[i] = (aux%8 + '0');

        aux /= 8;
    }
    
    printf("\nBinary : %s\nOctal : ",n);
    for(int i = strlen(oct) - 1; i >= 0; i--)
    printf("%c",oct[i]);

}
int main()
{
    char n[20];
    printf("Enter the number: "); gets(n);

    getOct(n);

    return 0;
}