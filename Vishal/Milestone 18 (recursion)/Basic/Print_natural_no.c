#include <stdio.h>

void incPrint(int n)
{
    if (n == 0)
        return;
    incPrint(n - 1);
    printf("%d ", n);
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    incPrint(n);

    return 0;
}