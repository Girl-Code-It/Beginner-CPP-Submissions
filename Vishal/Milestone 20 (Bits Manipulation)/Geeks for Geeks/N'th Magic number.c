#include<stdio.h>
/*
Magic Number are the number which can be
Represented as a power of 5 or sum of unique power of 5.
For example : 5,25,30(25+5),125,130(125+5),....
*/

int MagicNumber(unsigned int n)
{
  unsigned int power = 1,ans = 0;

  while(n)
  {
    power *= 5;
    
    if(n & 1)
    ans += power;
    
    n >>= 1;
  }

  return ans;
}

int main()
{
    unsigned int n;
    printf("FIND N'TH MAGIC NUMBER\n\n");
    printf("Enter the value of n : ");
    scanf("%u",&n);
    
    printf("\nN'th Magic Number : %u\n",MagicNumber(n));
    
    return 0;
}