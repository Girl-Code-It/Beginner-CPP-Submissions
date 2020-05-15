#include<stdio.h>

int main()
{
    int a[10];
    printf("Enter any 10 integers :");
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
    
    printf("Entered no are : ");
    for(int i=0;i<10;i++)
    printf("%d ",a[i]);
}