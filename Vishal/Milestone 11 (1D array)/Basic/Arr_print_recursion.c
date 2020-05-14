#include<stdio.h>

void print_array(int a[],int str,int len)
{
    if(str>=len)
        return;

    printf("%d ",a[str]);

    print_array(a,str+1,len);
}
void main()
{
    int a[50],n;
    printf("Enter the no of element : ");
    scanf("%d",&n);

    printf("Enter the elements : ");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
        
    printf("Array elements are : ");
    print_array(a,0,n);
}