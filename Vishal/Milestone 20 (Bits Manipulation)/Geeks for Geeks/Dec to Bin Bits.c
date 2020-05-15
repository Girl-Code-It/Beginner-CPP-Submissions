#include<stdio.h>

void DecToBin(unsigned int n)
{
  unsigned i;
  
  for( i = 1 << 31 ; i > 0 ; i /= 2)
   (n & i) ? printf("1") : printf("0");
}

int main()
{
    unsigned int n;
    printf("Enter Number to Find Its Binary");
    scanf("%u",&n);
    
    DecToBin(n);
    printf("\n");
    
    return 0;
}