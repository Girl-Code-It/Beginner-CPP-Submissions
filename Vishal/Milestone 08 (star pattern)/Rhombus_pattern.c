#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no of rows \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1 - i; j++)
        {
            if (j < n - 1 - i)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}