#include <stdio.h>

int main()
{
    int n, l, k = 1;
    printf("Enter the no : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        l = n;
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                printf("%d ", l);
                l--;
            }
            else
                printf("%d ", n + 1 - i);
        }
        printf("\n");
    }
}
