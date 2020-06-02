#include<stdio.h>
void swap();

 main ()
{
    int b,a,x,y;
    printf("Enter two integers \n");
    scanf("%d %d",&a,&b);
    printf("before swapping : %d\t%d\n",a,b);
    swap(a,b);
    printf("a = %d , b = %d\n",a,b);
  }
  swap(x,y)
    {
     int z;
    z = x;
    x = y;
    y = z;
    printf("after  swapping : %d\t%d\n",x,y);
    }
   

       
    
    