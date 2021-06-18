//q19- wap to print all unique numbers in an array.
#include<iostream>
using namespace std;
int main()
{
	int a[100]={12,1,3,4,12,3,5,7,1,6,0,1};
	int i,j,sum,freq[100];
	cout<<"The array is = "<<endl;
	for(i=0;i<11;i++)
	{
		cout<<a[i]<<" ";
	}
	for(i=0;i<11;i++)
	{   sum=1;
		for(j=i+1;j<11;j++)
		{
			if(a[i]==a[j])
			sum++;
		}
		freq[i]=sum;
		cout<<"Frequency of "<<a[i]<<" is= "<<freq[i]<<endl;
	}
}
