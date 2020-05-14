#include<stdio.h>

 main()
{
    int a[10],b[5],c[5];
    printf("Enter any ten no. : ");
    for(int i=0; i<10; i++)
        scanf("%d",&a[i]);
    for(int i=0; i<5; i++)
        b[i]=a[i];
    for(int i=5; i<10; i++)
        c[i-5]=a[i];
    for(int i=0; i<5; i++)
        printf("%d ",b[i]);
    printf("\n");
    for(int i=0; i<5; i++)
        printf("%d ",c[i]);
}