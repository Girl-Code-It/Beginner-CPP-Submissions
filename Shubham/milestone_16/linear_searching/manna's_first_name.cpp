#include<stdio.h>
#include<string.h>

int main()
{
        int t;
        scanf("%d",&t);

        while(t--)
        {
                char s[150];
                int suvojit=0, suvo=0;
                scanf("%s",s);

                for(int i=0; i<strlen(s); i++)
                {
                        if(s[i] == 'S' && s[i+1] == 'U' && s[i+2] == 'V' && s[i+3] == 'O' && s[i+4] == 'J' && s[i+5] == 'I' && s[i+6] == 'T')
                                suvojit++;
                        
                        else if(s[i] == 'S' && s[i+1] == 'U' && s[i+2] == 'V' && s[i+3] == 'O')
                                suvo++;
                }

                printf("SUVO = %d, SUVOJIT = %d\n", suvo, suvojit);
        }
}
