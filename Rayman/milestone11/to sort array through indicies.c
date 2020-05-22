#include<stdio.h>
int main()
{int a[]={10,12,20,30,25,40,32,31,35,50,60};
int i,s=0,max,min;
int n=sizeof(a)/sizeof(a[0]);
int e=n-1;
for( s=0;s<n-1;s++)
{if(a[s]>a[s+1])
break;}
if(s==n-1)
{printf("the complete array is sorted");}
for(e=n-1;e>0;e--)
{if(a[e]<a[e-1])
            break;}
max=a[s];min=a[s];
for(i=s+1;i<e;i++)
{if(a[i]>max)
    max=a[i];
if(a[i]<min)
    min=a[i];}
for(i=0;i<s;i++)
{if(a[i]>min)
    {s=i;
    break;}}
for(i=n-1;i>=e+1;i--)
{if (a[i]<max)
{e=i;
break;}
printf("the unsorted subarray which makes the given array sorted lies between indicies %d and %d",s,e);
return 0;}
