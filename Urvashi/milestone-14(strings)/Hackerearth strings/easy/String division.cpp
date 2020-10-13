#include <stdio.h>

#include <string.h>

int main()
{
    int t, l, n, i, j, k, flag;
    char s[1005];
    scanf("%d", &t);
    while (t--)
    {
        int c[30] = {0}, count = 0;
        ;
        scanf("%s", s);
        l = strlen(s);
        if (l < 4)
            flag = 0;
        else if (l >= 10)
            flag = 1;
        else
        {
            for (i = 0; i < l; i++)
            {
                c[s[i] - 'a']++;
            }
            for (i = 0; i < 26; i++)
            {
                if (c[i] != 0)
                    count++;
            }
            if (count >= 4)
                flag = 1;
            else if (count == 1)
                flag = 0;
            else if (l >= 7)
                flag = 1;
            else if (l == 4)
            {
                if (count == 4)
                    flag = 1;
                else
                    flag = 0;
            }
            else if (l == 5)
            {
                if (count == 2)
                    flag = 0;
                else if (count == 3)
                {
                    flag = 1;
                    for (i = 0; i < l - 1; i++)
                    {
                        if (c[s[i] - 'a'] == 3)
                            flag = 0;
                    }
                    for (i = 0; i < l - 1; i++)
                    {
                        if (s[i] == s[i + 1])
                            flag = 1;
                    }
                }
            }
            else if (l == 6)
            {
                if (count == 3)
                    flag = 1;
                else if (count == 2)
                {
                    flag = 1;
                    for (i = 0; i < 26; i++)
                    {
                        if (c[i] == 1)
                            flag = 0;
                    }
                }
            }
        }
        if (flag == 0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
