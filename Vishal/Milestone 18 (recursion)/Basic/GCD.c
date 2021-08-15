#include <stdio.h>

int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            return gcd(a - b, b);
        else
            return gcd(a, b - a);
    }
    return b;
}

int main()
{
    int n1, n2;
    printf("Enter the 1st number : ");
    scanf("%d", &n1);

    printf("Enter the 2nd number : ");
    scanf("%d", &n2);

    printf("GCD of %d & %d : %d\n", n1, n2, gcd(n1, n2));
    return 0;
}