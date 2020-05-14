#include<stdio.h>

//Find k'th least significant bit
int main()
{
    int n,k;
    printf("Enter the Number : ");
    scanf("%d",&n);
    printf("Enter the position of the bits ");
    scanf("%d",&k);
    
    int ans = n & (1 << (k-1));
    
    ans = (ans > 0) ? 1 : 0;
    
    printf("%d'th Least significant bit of %d : %d\n",k,n,ans);

}