//problem-26-11
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter size "<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	/*int temp,k;
	cout<<"enter how many left rotations"<<endl;
	cin>>k;
	while(k)
	{
	*/
	int temp=arr[n-1];
	for(int i=n-1;i>=0;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
	//k--;
//}
	cout<<"after right rotation "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
