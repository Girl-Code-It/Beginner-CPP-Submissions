#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[30];
        scanf("%s",&a);
        char b[strlen(a)];
        int i;
        for(i=0; i<strlen(a); i++)
            b[i] = a[strlen(a) - 1 - i];
          b[i] ='\0';
        printf("%s\n",b);
    }
    return 0;
}