#include<stdio.h>

void DecToBin(unsigned int n)
{
  if(n > 1)
   DecToBin(n/2);

  printf("%d",n%2);
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