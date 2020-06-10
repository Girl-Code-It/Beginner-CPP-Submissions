#include<stdio.h>

void Copy(char *s,char *t)
{
   static int n = 0;
   if(n == strlen(s))
   {
    printf("Copied string : %s",t);
    return;
   }
   else
   {
      t[n] = s[n];
      n++;
      Copy(s,t);
   }
}
int main()
{
  char s[100],t[200];
  printf("Enter the string : ");
  scanf("%s",s);

  Copy(s,t);
}