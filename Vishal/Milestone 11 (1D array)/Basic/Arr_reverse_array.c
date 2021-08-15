#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the no of element : ");
    scanf("%d", &n);

    int *a = (int *)malloc(n * sizeof(int));
    printf("input the element\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }

    printf("Reverse array\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    free(a);
    return 0;
}
