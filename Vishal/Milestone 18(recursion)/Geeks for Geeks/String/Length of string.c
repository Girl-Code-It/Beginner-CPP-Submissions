#include<stdio.h>

int Length(char *s,int index)
{
   if(s[index] == '\0')
   return index;

   return Length(s,index+1);
}
int main()
{
    char s[100];
    printf("Enter the string : ");
    scanf("%s",s);

    printf("%d\n",Length(s,0));
}