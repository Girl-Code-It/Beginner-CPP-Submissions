#include <stdio.h>

int main()
{
    int n, sum = 0, r, temp;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("Armstrong no. Between 1 and %d are :\n");
    for (int i = 1; i <= n; i++)
    {
        temp = i;
        while (temp != 0)
        {
            r = temp % 10;
            sum += r * r * r;
            temp /= 10;
        }
        if (sum == i)
            printf("%d\n", i);
        sum = 0;
    }
    return 0;
}