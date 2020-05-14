#include<stdio.h>

int main ()
{
   int t;
   scanf("%d",&t);
   
  while(t--)
  {
    char a[100000];
    scanf("%s",a);
    long long count = 0;
    for(long i=0;a[i] != '\0';i++)
      {
        if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        count++;
        else if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        count++;
      }
    printf("%lld\n",count);  
 }

}