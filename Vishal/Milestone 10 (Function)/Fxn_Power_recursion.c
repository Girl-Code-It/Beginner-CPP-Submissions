#include <stdio.h>

int power(x,y)
{    
   if(y==1) 
   return x;
   else  
   return x*power(x,y-1);
}

void main()
{
    int p,b,result;

    printf("Enter the base : ");
    scanf("%d",&b);
    printf("Enter the exponent : ");
    scanf("%d",&p);
    
    printf("The value of %d of %d is\n%d",b,p,power(b,p));
}




    