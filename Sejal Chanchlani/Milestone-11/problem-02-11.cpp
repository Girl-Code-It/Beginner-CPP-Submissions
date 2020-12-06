//problem-02-11
#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cout<<"enter "<<i<<"th element"<<endl;
		cin>>arr[i];
	}
		for(int i=0;i<10;i++)
	{
		
		cout<<arr[i]<<endl;
	}
	int x;
	cout<<"enter number to be searched"<<endl;
	cin>>x;
	for(int i=0;i<10;i++)
	{
		if(x==arr[i])
		{
			cout<<"element found at "<<i<<" th index"<<endl;
			break;
		}
	}
}
