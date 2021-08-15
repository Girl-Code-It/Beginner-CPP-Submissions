#include <stdio.h>

int fac(n)
{
    if (n == 0)
        return 1;
    return n * fac(n - 1);
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    printf("\n%d! = %d\n", n, fac(n));
    return 0;
}