#include <stdio.h>

int main()
{
    int a, b, max, lcm;
    printf("enter two integers\n");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    for (int i = max; i <= a * b; i++)
    {
        if ((i % a) == 0 && (i % b) == 0)
        {
            lcm = i;
            break;
        }
    }
    printf("LCM = %d", lcm);
}