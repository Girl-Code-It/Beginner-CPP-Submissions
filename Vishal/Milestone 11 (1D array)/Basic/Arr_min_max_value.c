#include<stdio.h>

int main()
{
    int a[5],max,min;
    printf("Enter any five no : ");
    for(int i=0; i<5; i++)
    scanf("%d",&a[i]);
    max = a[0];
    min = a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
         max = a[i];
        if(a[i]<min)
         min = a[i];
    }
    printf("Minimum value is %d\n",min);
    printf("Maximum value is %d\n",max);
      return 0;

}