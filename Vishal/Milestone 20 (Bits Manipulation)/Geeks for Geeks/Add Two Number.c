#include<stdio.h>

int add(int x,int y)
{
   int carry;
   //Until carry become 0
   while(y != 0)
   {
     //Common set bits of x & y
      carry = x & y;
    
     //sum of bits of x & y
     x = x ^ y;
    
     //Shift carry left
     y = carry << 1;
   }

   return x;
}
int main()
{
    int x,y;
    printf("Enter Two Number for addition\n");
    scanf("%d %d",&x,&y);
    
    printf("%d + %d = %d",x,y,add(x,y));
    
    return 0;
}