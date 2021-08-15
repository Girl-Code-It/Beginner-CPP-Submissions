#include <stdio.h>

long decBin(int n)
{
    static int factor = 1, bin, rem;

    if (n != 0)
    {
        rem = n % 2;
        bin += rem * factor;
        factor *= 10;

        decBin(n / 2);
    }

    return bin;
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    printf("The binary conversion of %d is\n%ld", n, decBin(n));

    return 0;
}