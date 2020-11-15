// question: we have to convert -> into . but if -> is present inside comments then no need to change .

#include <stdio.h>
#include <string.h>
int main()
{
    int b, i, j;
    char str[2000];
    while (gets(str) != NULL) // traversing whole string.
    {
        b = strlen(str); // storing length in b.
        for (i = 0; i <= b - 1; i++)
        {
            // if ith char is / and i+1 is also / means its a comment .so break here no need to check further.
            if (str[i] == '/' && str[i + 1] == '/')
            {
                break;
            }
            else
            {
                //but if its not a comment and ith char is - and i+1 th char is > then change the ith char into '.'
                if (str[i] == '-' && str[i + 1] == '>')
                {
                    str[i] = '.';
                    for (j = i + 1; j <= b - 1; j++)
                    {                        // after changing - into '.'
                        str[j] = str[j + 1]; // shift the j+1 char into j.
                    }
                    b--; // and decrease the length.
                }
            }
        }
        printf("%s\n", str); // print the updated string.
    }
    return 0;
}
