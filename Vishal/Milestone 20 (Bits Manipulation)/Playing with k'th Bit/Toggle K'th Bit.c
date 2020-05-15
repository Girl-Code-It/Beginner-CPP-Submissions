#include<stdio.h>
/*
toggle k'th bit means if K'th bit
is 1 change it to 0 and vice - versa
*/
void DecToBin(unsigned int n)
{
    if(n > 1)
        DecToBin(n/2);

    printf("%d",n%2);
}
int main()
{
    unsigned int n,k;
    printf("Enter the Number : ");
    scanf("%u",&n);
    printf("Bit that Has to toggle : ");
    scanf("%u",&k);

    //Printing its Binary form
    printf("\n%u in Binary form\n",n);
    DecToBin(n);

    //(1 << k-1) give a no. whose all bit is 0 except K'th bit

    unsigned int ans = n ^ (1 << (k-1));

    printf("\n\nAftet Toggling %u'th Bit\n",k);

    //Print after toggling
    printf("\n%u in Binary form\n",ans);
    DecToBin(ans);

    printf("\n");
    return 0;
}