#include<stdio.h>

//Find Position of Rightmost set bit

void DecToBin(unsigned int n)
{
    if(n > 1)
        DecToBin(n/2);

    printf("%d",n%2);
}

int main()
{
    unsigned int n;
    printf("Enter the Number : ");
    scanf("%u",&n);

    printf("\nIn Binary Form : ");
    DecToBin(n);

    printf("\n\nPosition RightMost Set Bit is ");
    if(n & 1)
        printf("1\n");
    else
    {
        //Unset the Rightmost Set bit & Xor with itself
        n = n ^ (n & (n - 1));

       // Find the position of only set bit
        int pos = 0;
        
        while(n)
         {
            n >>= 1;
            pos++;
         }
        
        printf("%d\n",pos);
    }
    return 0;
}