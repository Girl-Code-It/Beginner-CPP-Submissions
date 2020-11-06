#include <stdio.h>

int main()
{
    int n, k;
    long long Sum = 0, max;
    scanf("%d %d", &n, &k);
    int a[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < k; i++)
        Sum += a[i];

    max = Sum;

    for (int i = 0; i < k - 1; i++)
    {
        Sum += a[n - 1 - i] - a[k - 1 - i];
        if (Sum >= max)
            max = Sum;
    }
    printf("%lld\n", max);
}
