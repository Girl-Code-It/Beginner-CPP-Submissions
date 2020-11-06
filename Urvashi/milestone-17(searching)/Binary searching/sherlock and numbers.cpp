#include <stdio.h>
int main()
{
    short t;
    long long n, p, x;
    int k;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d%d", &n, &k, &p);
        int a, c = 0;
        for (int i = 0; i < k; i++)
        {
            scanf("%d", &a);
            if (a <= (p + c))
                c++;
        }
        if (k + p <= n)
            printf("%d", p + c);
        else
            printf("-1\n");
    }
}
