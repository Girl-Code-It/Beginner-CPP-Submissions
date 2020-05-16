#include<stdio.h>
int main()
{   int n,q,x;
	scanf("%d",&n);
	short int a[n];
	for(int i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	if(i>0)
	a[i]+=a[i-1];
	}
	scanf("%d",&q);
	while(q--)
	{
	scanf("%d",&x);
	x=a[n-1]+1-x;
	int l=0,h=n-1,mid,ans;
	while(l<=h)
{
	mid=l+(h-l)/2;
	if(a[mid]>=x&&a[mid-1]<x)
    break;
	else if(a[mid]<x)
	l=mid+1;
	else
	h=mid-1;

}
    if(mid%2!=0)
    printf("B\n");
    else
    printf("A\n");
	}
}
