//find floor of elment in sorted array
#include<iostream>
#include<conio.h>
using namespace std;

int BinarySearch(int a[],int s,int n)
{	
	int start=0;
	int end=s-1;
	int mid,res;
	while(start<=end)
	{
		mid = start + ((end-start)/2); //to avoid int overflow
		
		if(a[mid]==n)
			return mid;
			
		if (a[mid]<n) 
		{	
			start=mid+1;
		}
		if (n<a[mid])  //element is lesser that means the a[mid] is a candidate for ceil result
		{
			res=mid;
			end=mid-1;
		}
		
	}
	return res;
}
int main()
{
	int arr[20],num,size;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	
	cout<<"Enter elements "<<endl;
	 for(int i=0;i<size;i++)
	 	cin>>arr[i];
	 	
	cout<<"Enter the element to search in array"<<endl;
	cin>>num;
	int result=BinarySearch(arr,size,num);
	
	if(result==-1)	
		cout<<"Element not found "<<endl;
	else
		cout<<"Element found at index "<<result<<endl;
		
	getch();
	return 0;
}
