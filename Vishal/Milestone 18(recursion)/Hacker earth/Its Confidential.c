#include<stdio.h>

void encrypted(char *a,int start,int last)
{
    if(start <= last)
    {
        int mid = (start + last)/2;
        printf("%c",a[mid]);
        encrypted(a,start,mid-1);
        encrypted(a,mid+1,last);
    }
}

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        char a[10005];
        scanf(" %s",a);

        encrypted(a,0,n-1);
        printf("\n");
    }
}