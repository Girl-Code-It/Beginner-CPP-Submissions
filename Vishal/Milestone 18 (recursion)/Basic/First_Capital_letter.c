#include<stdio.h>

char findUpr(char *s,int i)
{
    if(i == strlen(s))
        return 0;

    if(islower(s[i]))
        findUpr(s,i+1);
    else
       return s[i];
}

int main ()
{
    char s[50];
    printf("Enter the string : ");
    scanf(" %s",s);

    printf("The first capital letter appear is %c.\n",findUpr(s,0));
    return 0;
}