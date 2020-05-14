#include <stdio.h>

void table(x,y)
{
    if(y>1)
    {
        table(x,y-1);
    }
    printf("%d × %d = %d\n",x,y,x*y);

}
void main()
{
    int n;
    printf("Enter any no to print its table : ");
    scanf("%d",&n);

    printf("The multiplication table of %d is as follows\n",n);
    table(n,10);
}



