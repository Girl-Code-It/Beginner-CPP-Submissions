#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, i = 0;
    printf("Enter the no of element : ");
    scanf("%d", &n);

    int *a = (int *)malloc(n * sizeof(int));
    int *b = (int *)malloc(n * sizeof(int));

    printf("Enter the elements : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    while (i < n)
    {
        b[i] = a[i];
        i++;
    }

    printf("Copied array is : ");
    for (int i = 0; i < n; i++)
        printf("%d ", b[i]);

    free(a), free(b);

    return 0;
}