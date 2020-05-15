#include<stdio.h>

char findUpr(char *s)
{
   if(*s == '\0')
   return -1;

   if(isupper(*s))
   return *s;

   findUpr(s+1);
}

int main()
{
    char s[100];
    printf("Enter the string : ");
    scanf("%s",s);

    char C = findUpr(s);
    (C == '-1') ? printf("Not Found.\n") : printf("%c\n",C);
}