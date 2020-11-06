#include <stdio.h>

int main()
{
    int x, y, s, T, path = 0;
    scanf("%d %d %d %d", &x, &y, &s, &T);

    for (int i = x; i <= x + s; i++)
    {
        for (int j = y; j <= y + s; j++)
            if ((i + j) <= T)
                path++;
    }
    printf("%d", path);
    return 0;
}
