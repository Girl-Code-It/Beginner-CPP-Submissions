#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter Any Two Number : ");
    scanf("%d %d",&x,&y);
    
    if((x ^ y) >> 31)
    printf("\nSigns are Opposite....\n");
    else
    printf("\nSigns are Same....\n");
    
    return 0;
}