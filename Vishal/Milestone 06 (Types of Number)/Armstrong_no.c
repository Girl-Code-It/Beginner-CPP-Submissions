#include <stdio.h>

int main()
{
    int n, sum = 0, r, temp;
    printf("Enter the number\n");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        r = temp % 10;
        sum += r * r * r;
        temp /= 10;
    }
    if (sum == n)
        printf("%d is a Armstrong no.\n", n);
    else
        printf("%d is not a Armstrong no.\n", n);
    return 0;
}