#include <stdio.h>

int main()
{
    int n, sum = 0, r, temp, c;
    printf("Enter the number\n");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        r = temp % 10;
        int c = 1;
        for (int i = 1; i <= r; i++)
            c *= i;
        sum += c;
        temp /= 10;
    }
    if (sum == n)
        printf("%d is a strong no", n);
    else
        printf("%d is not a strong no", n);
    return 0;
}
