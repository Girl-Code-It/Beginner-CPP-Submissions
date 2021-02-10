//q30-wap to print all unique elements in an array.
#include<iostream>
using namespace std;
int main()
{
	int a[100],f[100],i,j,n,s=0;
	cout<<"Enter the total number of elements : ";
	cin>>n;
	cout<<"Enter "<<n<<" elements in the array : "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		s=1;
		if(a[i]!=-1)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					s++;
					a[j]=-1;
				}
			}
		f[i]=s;
		}
	}
	cout<<"Unique elements are : "<<endl;
	if(a[i]!=-1){
	for(i=0;i<n;i++)
	{
		if(f[i]==1)
		cout<<a[i]<<" ";
	}
}
}
