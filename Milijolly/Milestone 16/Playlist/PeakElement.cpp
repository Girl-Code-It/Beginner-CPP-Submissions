//Binary search on answer- Peak Element(element should be greater than both neighbours
// or find max element in bitonic array
#include<iostream>
#include<conio.h>
using namespace std;

int BinarySearch(int a[],int s)
{	
	int start=0;
	int end=s-1;
	int mid;
	while(start<=end)
	{
		mid = start + ((end-start)/2); //to avoid int overflow
	
		if(a[mid]>0 &&a[mid]<s-1)
		{	
			if(a[mid]>a[mid-1]&&a[mid]>a[mid+1])
				return mid;
			else if (a[mid-1]>a[mid]) 
				end=mid-1;	
			//if (a[mid+1]>a[mid]) 
			else
				start=mid+1;	
		}
		else if(mid==0)
		{
			if(a[0]>a[1])
				return 0;
			else
				return 1;
		}
		else
		{
			if(a[s-1]>a[s-2])
				return s-1;
			else
				return s-2;
		}				
	}
}
int main()
{
	int arr[20],num,size;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	
	cout<<"Enter elements "<<endl;
	 for(int i=0;i<size;i++)
	 	cin>>arr[i];
	 	
	int result=BinarySearch(arr,size);
	cout<<"Peak Element is "<<arr[result]<<endl;
		
	getch();
	return 0;
}
