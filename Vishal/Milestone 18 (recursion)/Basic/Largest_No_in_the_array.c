#include <stdio.h>

int largest(int *a, int n)
{
    static int max = -32677, i = 0;
    if (i < n)
    {
        if (max < a[i])
            max = a[i];
        i++;
        largest(a, n);
    }

    return max;
}

int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the element\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Largest element of the array : %d\n", largest(a, n));
    return 0;
}