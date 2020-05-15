#include<iostream>
using namespace std;
int main()
{
	int freq[100], i, size,j, a[100], count=0;
	cout<<"enter the size of the array:"<<endl;
	cin>>size;
	cout<<"enter the elements on the array:";
	for(i=0; i<size;i++)
	{
		cin>>a[i];
}
freq[i]=0;
	for(i=0;i<size;i++)
	{	
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
		{	count++;
		break;
	}}}
	cout<<"total no of duplicate elements:"<<endl;
	cout<<count;
		
	}
