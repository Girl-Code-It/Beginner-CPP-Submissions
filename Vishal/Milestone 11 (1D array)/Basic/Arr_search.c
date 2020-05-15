#include<stdio.h>

int main()
{
    int a[10],b,i;
    printf("Enter any ten no. :");
    for(int i=0; i<10; i++)
        scanf("%d",&a[i]);

    printf("Entered a no to check in given input : ");
    scanf("%d",&b);
    for(i=0; i<10; i++)
    {
        if(a[i]==b)
        {
        printf("%d is found in given input",b);
        break;
        }
    }    
    if(i==10)
    printf("%d is not found in given input",b);
}