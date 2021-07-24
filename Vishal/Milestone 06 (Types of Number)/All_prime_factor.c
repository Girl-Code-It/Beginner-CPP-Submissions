#include <stdio.h>

int check_prime(int a)
{
    int j;

    for (j = 2; j <= a - 1; j++)
    {
        if (a % j == 0)
            return 0;
    }
    
    return 1;
}

int main()
{
    int i, n;

    printf("Enter the number\n");
    scanf("%d", &n);
    printf("all prime factors of %d are :\n", n);

    for (i = 0; i < n; i++)
        if ((n % i) == 0 && check_prime(i))
            printf("%d\n", i);

    return 0;
}