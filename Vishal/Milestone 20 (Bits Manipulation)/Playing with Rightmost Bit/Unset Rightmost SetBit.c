#include<stdio.h>

//Unset rightmost set bit

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

    //Printing its Binary form
    printf("\n%u in Binary form\n",n);
    DecToBin(n);

    unsigned int ans = n & (n - 1);

    printf("\n\nUnset the Rightmost Set bit\n");

    //Print after toggling
    printf("\n%u in Binary form\n",ans);
    DecToBin(ans);

    printf("\n");
    return 0;
}