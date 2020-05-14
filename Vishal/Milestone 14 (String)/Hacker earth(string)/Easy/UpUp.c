#include<stdio.h>

int main()
{
  char a[30001];
  gets(a);
  if((a[0] >= 'a' && a[0] <= 'z'))
     a[0] -= 32;
    
  for(int i=1;i<strlen(a);i++)
   {
      if(a[i] == ' ')
       {
          if((a[i+1] >= 'a' && a[i+1] <= 'z'))
           a[i+1] -= 32;
       } 
   }
  puts(a);
  return 0;
}
    