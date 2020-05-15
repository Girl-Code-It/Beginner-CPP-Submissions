#include<stdio.h>

int main()
{
    int first=0,second=1,next,n;
    printf("enter the no of terms \n");
    scanf("%d",&n);
    printf("%d %d ",first,second);
    for(int i=0;i<n-2;i++)
    {
         next = first + second;
        printf("%d ",next);
        first = second;
        second = next;
    }
    return 0;
}