#include <stdio.h>

int hailsvalue(int n)
{
    if (n % 2 == 0)
        return n / 2;
    else
        return 3 * n + 1;
}

void printHails(int n)
{
    printf("%d ", n);
    if (n != 1)
        printHails(hailsvalue(n));
}

int count(int n)
{
    if (n == 1)
        return 1;
    else
        return 1 + count(hailsvalue(n));
}
int main()
{
    int n;
    printf("Enter the number for hailstone sequence : ");
    scanf("%d", &n);

    printf("\nHailstone sequence starting from %d is\n\n", n);
    printHails(n);

    printf("\n\nThe length of the sequence is %d\n", count(n));
}