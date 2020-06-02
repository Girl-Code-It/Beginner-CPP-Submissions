#include<stdio.h>
int main()
{
    int t,n[1000009];
    scanf("%d",&t);

    while(t--)
    {
        scanf(" %s",n);
        int heart = 1;
        for(int i=0; n[i] != '\0'; i++)
        {
            if(strstr(n,"21"))
            {
                heart = 0;
                break;
            }
        }
        if(heart == 0)
            printf("The streak is broken!\n");
        else
        {
            if((atoi(n)%21 == 0))
                printf("The streak is broken!\n");
            else
                printf("The streak lives still in our heart!\n");
        }
    }
    return 0;
}