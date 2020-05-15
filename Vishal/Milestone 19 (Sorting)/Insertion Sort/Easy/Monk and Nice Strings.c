#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    char a[n+1][10];
    for(int i=1; i<=n; i++)
    {
        int count = 0;
        scanf("%s",&a[i]);
        for(int j=1; j<i; j++)
        {
            if(strcmp(a[j],a[i]) < 0)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}