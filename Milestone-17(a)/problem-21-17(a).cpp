#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int start,int end,int ele)
{
	int c=0;
	if(start<=end)
	{
		int mid=(start+end)/2;
	
	if(arr[mid]==ele)
	{
		c=mid;
	}
	else if(ele<arr[mid])
	{
		return binarysearch(arr,size,start,mid-1,ele);
	}
	else
	{
		return binarysearch(arr,size,mid+1,end,ele);
	}
}
return c;
	
}
int main()
{
	int size=9;
	int arr[]={1,2,3,4,5,6,7,8,9}; //array must be sorted;

	int ele;
	cout<<"enter element"<<endl;
	cin>>ele;
	int x=binarysearch(arr,size,0,size-1,ele);
	cout<<"element found at - "<<x;
}
