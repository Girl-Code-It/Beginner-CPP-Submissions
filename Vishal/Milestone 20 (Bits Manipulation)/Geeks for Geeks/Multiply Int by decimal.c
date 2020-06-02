#include<stdio.h>

//Multiply with 3.5 without using *,/,%

// 3.5x = 2x + x + x/2
int main()
{
    int n,k;
    printf("Enter the Number : ");
    scanf("%d",&n);
    
    int ans = (n >> 1) + n + (n << 1);
    
    printf("\nIntegral Value of 3.5×%d : %d\n",n,ans);

}