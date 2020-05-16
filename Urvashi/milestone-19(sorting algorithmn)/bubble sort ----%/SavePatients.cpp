#include<iostream>
#include<math.h>
using namespace std;
void bubbleSort(int *a, int n)
{
int i, j,flag=0;
for (i = 1; i< n; i++)
{
for (j = 0; j <n-i; j++)
{
if (a[j] > a[j+1])
{
int temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
flag=1;
}
}
if(flag==0)
break;
}
}
int main()
{
	int n;
	cin>>n;
	int a[n],b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    bubbleSort(a,n);
    bubbleSort(b,n);
    int flag=1;
    for(int i=0;i<n;i++)
    {
    	if(a[i]<b[i])
    	flag=0;
	}
	if(flag==1)
	cout<<"Yes\n";
	else 
	cout<<"No\n";
}
