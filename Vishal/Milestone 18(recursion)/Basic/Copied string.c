#include<stdio.h>

void copyStr(char *t,char *s)
{
   static int i = 0;
   
   if(s[i] != '\0')
   {
      t[i] = s[i];
      i += 1;
      copyStr(t,s);
   }
   
}

int main ()
{
   char s[50],t[50];
   printf("Enter the string : ");
   scanf(" %s",s);

   copyStr(t,s);
   printf("\nCopied string : %s\n",t);

}