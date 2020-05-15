#include<iostream>
using namespace std;
int main()
{
	int  i, size ,a[100],j, temp;
	cout<<"enter the size of the array:"<<endl;
	cin>>size;
	cout<<"enter the elements on the array:";
	for(i=0; i<size;i++)
	{
		cin>>a[i];
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)	
{
	if(a[i]<a[j])
	{
	temp=a[j];
	a[j]=a[i];
	a[i]=temp;
	}
}
}cout<<"elements in descending order:"<<endl;
for(i=0;i<size;i++)
{
	cout<<a[i]<<" ";}
}
