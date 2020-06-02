#include<stdio.h>

void Max_Min_array_element(int a[],int str,int len)
{
    static int max = 0,min = 9999999;
    if(str>=len)
    {
        printf("Maximum element in an array : %d",max);
        printf("Minimum element in an array : %d",min);
        return;
    }

    if(a[str]>max)
        max = a[str];
    if(a[str]<min)
        min = a[str];

    Max_Min_array_element(a,str+1,len);
}
void main()
{
    int a[50],n;
    printf("Enter the no of element : ");
    scanf("%d",&n);

    printf("Enter the elements : ");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    Max_Min_array_element(a,0,n);
}