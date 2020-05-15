#include<stdio.h>

//Turn off k'th bit
int main()
{
   unsigned int n,k;
  printf("Enter the Number : ");
  scanf("%u",&n);
  printf("Bit that Has to switch off : ");
  scanf("%u",&k);

   //~(1 << k-1) give a no whose all bit is set except K'th bit

  unsigned int ans = n & ~(1 << (k-1));

  printf("%u\n",ans);

   return 0;
}