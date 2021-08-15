#include<stdio.h>

int main()
{
     long n;
    scanf("%d",&n);
while(n--)
  {
    char a[100000];
    scanf("%s",a);
    int k = 0;
    for(long long i=0; i<strlen(a)/2; i++)
    {
        if(a[i] != a[strlen(a)- 1 - i])
            k = 1;
    }
    if(k == 1)
     printf("NO\n");
    else
       printf("YES\n");
   }
    return 0;

}