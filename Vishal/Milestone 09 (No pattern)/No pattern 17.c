#include <stdio.h>

int main()
{
    int n, l, k;
    printf("Enter the no : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        l = i;
        k = 1;
        for (int j = 1; j <= n; j++)
        {
            if (i > j)
            {
                printf("%d ", l);
                l--;
            }
            else
            {
                printf("%d ", k);
                k++;
            }
        }
        printf("\n");
    }
}
