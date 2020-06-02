#include<stdio.h>

int main()
{
    unsigned int n;
    printf("Enter the Number : ");
    scanf("%u",&n);

    unsigned even = (n & 0xAAAAA) >> 1;
    unsigned odd  = (n & 0x55555) << 1;

    printf("\nAfter Swapping odd & even bits\n%u\n",even | odd);

    return 0;
}