//question: to swap the words inside the string . swap word 1 with w and 2 with w-1.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100001];
    long long t, i, len, j, k, flag, count, max_count;
    scanf("%lld", &t);
    getchar();
    while (t--)
    {
        gets(str);
        flag = 0;
        count = 0;
        max_count = 0;
        for (i = 0; str[i] != '\0'; i++) //traversing string.
        {
            if (str[i] == ' ') // if find space.
            {
                flag++;
                count = 0;
            }
            else
                count++;
            if (max_count <= count)
                max_count = count;
        }
        char temp[(flag + 1)][(max_count + 1)];
        j = 0, i = 0;
        len = strlen(str);
        while (i <= len)
        {
            k = 0;
            while (str[i] != ' ' && str[i] != '\0')
            {
                temp[j][k] = str[i];
                k++;
                i++;
            }
            i++;               //for skip space increament i
            temp[j][k] = '\0'; //after word is stored terminate that row
            j++;               //increament row for next word
        }
        for (i = j - 1; i >= 0; i--)
        {
            printf("%s ", temp[i]); //reverse print the temp array
        }
        printf("\n");
    }
    return 0;
}
