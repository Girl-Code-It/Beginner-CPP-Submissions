#include<stdio.h>
#include<limits.h>
int main()
{int a[10]={1,4,5,6,7,8,9};
int highest;int secondhighest;
int i;
highest= secondhighest=INT_MIN;
for(i=0;i<10;i++)
{if(a[i]>highest)
    {
        secondhighest=highest;
        highest=a[i];
        }}
if(secondhighest<a[i]&& a[i]<highest)
    {
        secondhighest=a[i];
    }
printf("the second highest element in array is %d",secondhighest);
return 0;
}



