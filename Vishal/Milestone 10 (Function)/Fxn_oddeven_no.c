#include<stdio.h>

void oddeven_no(x,y)
{
    if(x>y)
    return;
    printf("%d ",x);
    oddeven_no(x+2,y);
}

int main()
{
    int a,b;
    printf("Enter the upper limit : ");
    scanf("%d",&b);
    printf("Enter the lower limit : ");
    scanf("%d",&a);
    if(a%2 == 0)
    {
    printf("All Even No\n");
    oddeven_no(a,b);
    printf("\n\nAll Odd No\n");
    oddeven_no(a+1,b);
    }
    else
    {
    printf("All Even No\n");
    oddeven_no(a+1,b);
    printf("\n\nAll Odd No\n");
    oddeven_no(a,b);
    }
    return 0;
}