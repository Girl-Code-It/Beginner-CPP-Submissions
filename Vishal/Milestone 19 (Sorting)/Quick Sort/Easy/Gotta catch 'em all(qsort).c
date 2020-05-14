#include<stdio.h>

int Sort(const void*a,const void*b)
{
   return (*(int*)a - *(int*)b);
}
int main()
{
   int k;
   scanf("%d",&k);

   int a[k],temp,max = 0;
   for(int i=0;i<k;i++)
    scanf("%d",&a[i]);
    
   qsort(a,k,sizeof(int),Sort);

   for(int i=0;i<k;i++)
   {
     temp = a[i] + k-i;
     if(temp > max)
     max = temp;
   }
  printf("%d\n",max+1);

}