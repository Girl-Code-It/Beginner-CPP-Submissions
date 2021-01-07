//problem-09-11
#include<iostream>
using namespace std;
int main()
{
	int arr[]={4,8,6,3,2};
	int max=arr[0],x;
	for(int i=0;i<5;i++)
	{
		if(max<=arr[i])
		{
			max=arr[i];
		}
	}
	for(int i=0;i<5;i++)
	{
		if(max>arr[i] && arr[i]>x)
		{
			x=arr[i];
		}
	}
	cout<<"greatest element - "<<max<<endl;
	cout<<"second greatest element - "<<x;
	int brr[10];
	brr[0]=4;
	brr[1]=x;
	brr[2]=max-x;
	brr[3]=6;
	brr[4]=3;
	brr[5]=2;
	for(int i=0;i<6;i++)
	{
		cout<<brr[i]<<" ";
	}
	
	
}
