#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int c[n],i;
for(i=0;i<n;i++)
{
scanf("%d",&c[i]);
if(i>0)
c[i]+=c[i-1];
}
int q,j;
scanf("%d",&q);
while(q--)
{
scanf("%d",&j);
int l=0,h=n-1,mid;
while(l<=h)
{
mid=l+(h-l)/2;
if(j==c[mid])
break;
else if(c[mid]>j)
h=mid-1;
else
l=mid+1;
}
if(c[mid]<j)
printf("%d\n",mid+1);
else
printf("%d\n",mid);
}
}
