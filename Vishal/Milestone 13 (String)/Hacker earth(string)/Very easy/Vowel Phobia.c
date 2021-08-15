//To calculate no of vowel in a string
#include<stdio.h>

void main()
{  
    int n;
    scanf("%d",&n);
  while(n--)
  {
    char a[1000];
    scanf(" %s",&a);
  
    int count = 0;
    for(int i=0; a[i] != '\0'; i++)
    {
       if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        count++;
    }
    printf("%d\n",count);
   }
}