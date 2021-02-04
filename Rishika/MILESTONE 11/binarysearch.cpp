//wap for binary search.
#include<iostream>
using namespace std;
int bin(int arr, int size,int num)
{
	int low=0;
	int high=size-1;
	int mid;
	mid==(low+high)/2;
	while(low<=high)
	{
		if(num==arr[mid])
		return mid;
		else if(num>arr[mid])
		low=mid+1;
		else(num<arr[mid])
		high=mid-1;
	}
	return -1;
}
int main()
{
	int array[10]={0,12,3,45,22,9,49,8,10,5};
	int n;
	cout<<"Enter the number to be searched - ";
	cin>>n;
	int result= bin(array,10,n);
	if(result>=0)
	cout<<"The element is present at "<<result<<"(s/th) position.";
	else if(result<0)
	cout<<"Element is not present.";
}
