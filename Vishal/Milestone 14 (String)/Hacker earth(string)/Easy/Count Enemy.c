#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100000

int main()
{
    int num;
    scanf("%d ", &num);
    int i;
    for (i = 0; i < num; i++)
    {
        char elements[MAX_SIZE];
        scanf("%s", &elements);
        int len = strlen(elements);
        int q;
        int totalEnemy = 0;
        int xCount = 0;
        int oCount = 0;
        int killingCount = 0;
        for (q = 0; q < len; q++)
        {
            if (elements[q] == 'O')
                totalEnemy++;
        }
        for (q = 0; q < len; q++)
        {
            if (elements[q] == 'X')
                xCount++;
            else if (elements[q] == 'O')
                oCount++;
            else if (elements[q] == '*') 
            {
                xCount = 0;
                oCount = 0;
            }
            if (xCount > 0 && oCount > 0)
            {
                killingCount += oCount;
                oCount = 0;
            }
        }
        printf("%d\n", (totalEnemy - killingCount));
    }

    return 0;
}

