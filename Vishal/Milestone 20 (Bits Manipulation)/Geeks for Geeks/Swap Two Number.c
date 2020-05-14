#include<stdio.h>

void swap(int *x,int *y)
{
   if(*x == *y)
     return;
    
   *x = *x ^ *y ;

   *y = *x ^ *y ;

   *x = *x ^ *y ;
}

int main()
{
  int a,b;
  printf("Enter two number for swapping\n");
  scanf("%d %d",&a,&b);

  printf("\nBefore Swapping....\na = %d\nb = %d\n",a,b);

  swap(&a,&b);
  printf("After Swapping.....\na = %d\nb = %d\n",a,b);
}