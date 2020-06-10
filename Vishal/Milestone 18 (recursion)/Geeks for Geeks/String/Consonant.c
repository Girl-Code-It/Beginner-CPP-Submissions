#include<stdio.h>
int count = 0;
int Consonant(char *s)
{
    
    if(*s == '\0')
        return 0;

    *s = toupper(*s);
    if(!(*s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U') && (*s >= 'A' && *s <= 'Z'))
    count++;

    Consonant(s+1);
}

int main()
{
    char s[100];
    printf("Enter the string : ");
    gets(s);
    Consonant(s);
    printf("No of Consonant : %d.\n",count);
}