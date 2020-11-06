#include <stdio.h>
#include <string.h>
int main()
{
    char a[100000];
    scanf("%s", &a);
    int k = 0, n = strlen(a), r = 0;
    for (long long i = 0; i < n; i++)
    {
        if (a[0] != a[i])
        {
            r = 1; //all element of a string cannot be same
            break;
        }
    }
    if (r == 0)
    {
        printf("0");
        return 0;
    }
    for (long long i = 0; i < n; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            k = 1;
            break;
        }
    }
    if (k == 0)
        printf("%d", n - 1);
    else
        printf("%d", n);

    return 0;
}
