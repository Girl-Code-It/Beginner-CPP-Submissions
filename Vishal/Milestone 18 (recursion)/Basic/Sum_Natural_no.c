#include <stdio.h>

int sumOfnatural(int n)
{
    if (n == 0)
        return 0;

    return n + sumOfnatural(n - 1);
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Sum of number from 1 to %d : %d\n", n, sumOfnatural(n));

    return 0;
}