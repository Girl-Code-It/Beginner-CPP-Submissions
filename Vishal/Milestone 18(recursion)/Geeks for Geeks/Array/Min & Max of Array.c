#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int Min = INT_MAX,Max = INT_MIN;

int MiniMax(int n,int *a)
{
    static int i = 0;

    if(i == n)
        return Min;

    if(*(a+i) < Min)
        Min = *(a+i);

    else if(*(a+i) > Max)
        Max = *(a+i);

    i++;
    MiniMax(n,a);
}

int main()
{
    int n;
    printf("Enter the No of Element : ");
    scanf("%d",&n);

    int *a = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++)
        scanf("%d",(a+i));

    MiniMax(n,a);
    printf("Minimum Element : %d\n",Min);
    printf("Maximum Element : %d\n",Max);
    return 0;
}