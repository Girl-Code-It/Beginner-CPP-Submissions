#include<stdio.h>

//Rotation of bits
int main()
{
    unsigned int n,k;
    printf("Enter the Number : ");
    scanf("%u",&n);
    printf("Enter the No of Rotation : ");
    scanf("%u",&k);
    
    //Rotate bits right by k times
    unsigned Right = (n >> k) | (n << (32 - k));
    
    //Rotate bits left by k times
    unsigned Left  = (n << k) | (n >> (32 - k));
    
    
    printf("\nRight Rotation of bits : %d\n",Right);
    printf("\nLeft Rotation of bits : %d\n",Left);
    
    return 0;
}