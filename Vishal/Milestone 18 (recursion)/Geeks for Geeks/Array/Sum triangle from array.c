#include<stdio.h>

void printTriangle(int *a,int n)
{
    if(n < 1)
    return;
    
    int b[n-1];

    for(int i=0; i<n-1; i++)
        b[i] = a[i] + a[i+1];

    printTriangle(b,n-1);

    for(int i=0; i<n; i++)
    {
        if(i == n-1)
            printf("%d",a[i]);
        else
            printf("%d,",a[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the No of Element : ");
    scanf("%d",&n);
    int a[n];

    printf("Enter the element\n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    printTriangle(a,n);
    return 0;
}