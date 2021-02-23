//wap for linear search in an array.
#include<iostream>
using namespace std;
int find(int array[],int num,int size)
{
	for(int i=1;i<=size;i++)
	{
		if(array[i]==num)
		return i;
	}
	return -1;
}
int main()
{
	int arr[5]={12,23,45,67,8};
	int n;
	cout<<"Enter the number to be searched = ";
	cin>>n;
	int result= find(arr,n,5);
	if(result>=1)
	cout<<n<<" is present at the "<<result<<"th position.";
	else
	cout<<"Element not present.";
}
