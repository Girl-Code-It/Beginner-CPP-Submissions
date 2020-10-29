#include <stdio.h>

void oddEven(int var,int n)
{
   if(var > n)
    return;
    
   printf("%2d ",var);

  oddEven(var+2,n);
}

int main()
{ 
    int n;
    printf("Input the number: ");
    scanf("%d", &n);
    
    printf("\n\nAll Even No from 2 to %d are :\n",n);
    oddEven(2,n);
    
    printf("\n\nAll Odd No from 1 to %d are :\n",n);
    oddEven(1,n);
    
    return 0;
}

