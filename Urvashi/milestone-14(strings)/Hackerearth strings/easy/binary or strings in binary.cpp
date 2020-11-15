#include <stdio.h> //another method of time complexity O(n)
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        char s[n];
        scanf("%s", &s);
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                m++;
        }
        printf("%d", m * (m - 1) / 2);
    }
    return 0;
}
