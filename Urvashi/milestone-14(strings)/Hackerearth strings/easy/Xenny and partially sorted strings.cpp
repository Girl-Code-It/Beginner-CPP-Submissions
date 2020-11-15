#include <stdio.h>
#include <string.h>
int main()
{
    int n, k, m, t, i, j, l;
    int temp;
    char str[1000][1000];
    int a[1000];
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%d%d", &n, &k, &m);
        for (j = 0; j <= n; j++)
        {
            gets(str[j]);
            a[j] = 0;
        }
        for (j = 0; j <= n; j++)
        {
            for (l = j + 1; l <= n; l++)
            {
                if (strncmp(str[j], str[l], m) > 0)
                    a[j]++;
                else
                    a[l]++;
            }
            if (a[j] == k)
            {
                puts(str[j]);
                break;
            }
        }
    }
    return 0;
}
