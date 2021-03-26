//Number of times sorted array is rotated  (input is a rotated sorted array)
#include<iostream>
#include<conio.h>
using namespace std;

int BinarySearch(int a[],int s)
{	
	int start=0;
	int end=s-1;
	int mid,prev,next;
	while(start<=end)
	{   
		if(a[start]<=a[end]) //for a sorted array we return the minimum element
			return start;
		mid = start + ((end-start)/2); //to avoid int overflow
		prev= (mid +s-1)%s;
		next= (mid+1)%s;
			
		if(a[mid]<=a[prev]&&a[mid]<=a[next]) //if mid is the minimum element
			return mid;
			
		if (a[start]<=a[mid]) // minimum element is in the right half
			start=mid+1;	
			
		if (a[mid]<=a[end])  // minimum element is in the left half
			end=mid-1;
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
	
		cout<<"Number of times array is rotated is "<<result<<endl;
		
	getch();
	return 0;
}


