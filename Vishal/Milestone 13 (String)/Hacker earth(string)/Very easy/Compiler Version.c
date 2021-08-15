#include <stdio.h>
#include <string.h>
int main()
{
    int b, i, j;
    char str[2000];
    while (gets(str) != NULL)
    {
        b = strlen(str);
        for (i = 0; i <= b - 1; i++)
        {
            if (str[i] == '/' && str[i + 1] == '/')
            {
                break;
            }
            else
            {
                if (str[i] == '-' && str[i + 1] == '>')
                {
                    str[i] = '.';
                    for (j = i + 1; j <= b - 1; j++)
                    {
                        str[j] = str[j + 1];
                    }
                    b--;
                }
            }
        }
        printf("%s\n", str);
    }
    return 0;
}