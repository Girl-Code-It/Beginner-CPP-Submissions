#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int t;
    scanf("%d",&t);
    if(t > 10 || t < 1)
    {
        printf("Invalid Test\n");
        return 0;
    }

    while(t--)
    {
        int cntLwr = 0,cntUpr = 0;
        char s[110];
        scanf("%s",&s);
        if(strlen(s) > 100)
            printf("Invalid Input\n");
        else
        {
            for(int i=0; s[i] != '\0'; i++)
            {
                if(islower(s[i]))
                    cntLwr++;
                else if(isupper(s[i]))
                    cntUpr++;
            }
            if((cntLwr == 0) && (cntUpr == 0))
                printf("Invalid Input\n");
            else
            {
                if(cntLwr > cntUpr)
                    printf("%d\n",cntUpr);
                else
                    printf("%d\n",cntLwr);
            }
        }

    }
    return 0;
}