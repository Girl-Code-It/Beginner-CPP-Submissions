#include<stdio.h>

int printArr(int *a,int n,int i)
{
    if(n == 0 || i == n)
    return 0; 
    
    printf("%d ",a[i]);
    
    printArr(a,n,i+1);
     
}

int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element\n");
    for(int i=0;i<n;i++)
       scanf("%d",&a[i]);
    
    printf("Elements of array are\n");
     
    printArr(a,n,0);
    
    return 0;
}