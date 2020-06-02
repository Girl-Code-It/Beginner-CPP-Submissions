/*To count the number of such substrings 
that start and end with 1,*/
#include<stdio.h>

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        char s[n];
        scanf(" %s",&s);
        int m=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
                m++;
        }
        printf("%d\n",m*(m-1)/2);
    }
    return 0;
}