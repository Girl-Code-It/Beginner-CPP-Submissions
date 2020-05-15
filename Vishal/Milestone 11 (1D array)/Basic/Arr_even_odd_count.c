#include<stdio.h>

void main()
{
    int a[50],n,even = 0,odd = 0;
    printf("Enter the no of element : ");
    scanf("%d",&n);

    printf("Enter the elements : ");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
    {
       if(a[i]%2 == 0)
       even++;
       else
       odd++;
    }
    printf("No. Of even no are : %d\n",even);
    printf("No. Of odd no are : %d\n",odd);
}