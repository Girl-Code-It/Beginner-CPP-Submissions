#include <stdio.h>

int main()
{
    int n,a,b,c,max,min,d;
    scanf("%d",&n);
    scanf("%d%d%d",&a,&b,&c);
    min=a;
    max=a+c;
    for(; n>1; n--)
    {  
      scanf("%d%d%d",&a,&b,&c);
        if(max<a+c)
            max=a+c;
        if(min>a)
            min=a;
    }
    d=max-min+1;
   if(d==12)
       printf("%d",d-1);
   else
        printf("%d",d);
    return 0;
}