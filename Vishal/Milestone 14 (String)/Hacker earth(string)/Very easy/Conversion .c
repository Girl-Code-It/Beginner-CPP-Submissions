#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
 while(n>=0)
  {
    char a[200];
    gets(a);
    for(int i=0;i<strlen(a); i++)
    {
      if(a[i] >= 'a' && a[i] <= 'z')//or use islower(a[i])
          printf("%d",(a[i] - 96));
      else if(a[i] >= 'A' && a[i] <= 'Z')//or use isupper(a[i])
          printf("%d",(a[i] - 64));  
      else
          printf("$");
     }
    printf("\n");
    n--;
   }
   
    return 0;

}