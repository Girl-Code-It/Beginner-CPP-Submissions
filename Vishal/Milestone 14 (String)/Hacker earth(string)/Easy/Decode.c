#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,b,j;
    char str[100000],str1[100000];
    scanf("%d",&t);
    while(t--)
    {
        getchar();
        scanf("%s",str);
        b=strlen(str);
        if(b%2==1)
        {
            str1[b/2]=str[0];
            for(j=1; j<=(b/2); j=j+1)
            {
                str1[(b/2)-j]=str[2*j-1];
                str1[(b/2)+j]=str[2*j];
            }
        }
        else
        {
            for(j=0; j<=(b/2)-1; j=j+1)
            {
                str1[b/2-j-1]=str[2*j];
                str1[b/2+j]=str[(2*j)+1];
            }
        }
        str1[b]='\0';
        printf("%s\n",str1);
    }
    return 0;
}