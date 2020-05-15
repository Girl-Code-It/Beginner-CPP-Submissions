#include<stdio.h>

int main()
{
   int n,sh,sm,eh,em,hh,mm;
   scanf("%d",&n);
   while(n--)
  {
    scanf("%d %d %d %d",&sh,&sm,&eh,&em);
    
    if(em >= sm)
    {
       mm = em - sm;
       hh = eh - sh;
    }
    else
    {
       mm = 60 - (sm - em);
       hh = eh - sh - 1;
    }  
    printf("%d %d\n",hh,mm);
    
 }
    return 0;
}