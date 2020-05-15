#include<stdio.h>

int main()
{
    char a[20];
    printf("Enter string : ");
    gets(a);
    int count = 0;
    while(a[count]!='\0')
    {
        count++;
    }
    printf("Reverse string : ");
    for(int i=count-1; i>=0; i--)
    {
        printf("%c",a[i]);
    }

    return 0;

}