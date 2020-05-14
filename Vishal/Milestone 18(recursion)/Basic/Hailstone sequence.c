#include<stdio.h>

int hailsvalue(int n)
{
    if(n == 1)
        return 0;

    else if(n%2 == 0)
        n /= 2;

    else
        n = 3*n + 1;

    return n;
}

void printHails(int n)
{
    if(n == 1)
        printf("1 ");
    else
    {
        printf("%d ",n);
        printHails(hailsvalue(n));
    }

}

int count(int n)
{
    if(n == 1)
        return 1;
    else
        return 1+count(hailsvalue(n));
}
int main()
{
    int n;
    printf("Enter the number for hailstone sequence : ");
    scanf("%d",&n);

    printf("\nHailstone sequence starting from %d is\n\n",n);
    printHails(n);

    printf("\n\nThe length of the sequence is %d\n",count(n));

}