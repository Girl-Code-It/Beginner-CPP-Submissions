#include <stdio.h>
#include<string.h>
int main()
{
    int n,i,j,l,l1,fg,lf,k;
    char s[100][15],ch;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",s[i]);
    }
    /*    for(i=0;i<n;i++)
        {
            printf("%s\n",s[i]);
        }
        */
    for(i=0; i<n; i++)
    {
        l=strlen(s[i]);
        for(j=i; j<n; j++)
        {
            l1=strlen(s[j]);
            for(k=0; k<l&&k<l1; k++)
            {
                fg=0;
                if(s[i][k]!=s[j][l1-1-k])
                {
                    fg=1;
                    break;
                }
            }
            if(k==l&&fg==0)
            {
                lf=l;
                ch=s[j][lf/2];
            }

        }
    }
    printf("%d %c",lf,ch);
}