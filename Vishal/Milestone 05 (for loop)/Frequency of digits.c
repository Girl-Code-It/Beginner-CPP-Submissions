#include<stdio.h>

int main ()
{
    int n,a,i,count,j;
    printf("input the integer \n");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
       printf("frequency of %d = ",i);
       count=0;
      for(j=n;j>0;j=j/10)
    {
       a=j%10;
    if(a==i)
    {count++;}
    }
    printf("%d\n",count);
    }
    return 0;
}
    
    