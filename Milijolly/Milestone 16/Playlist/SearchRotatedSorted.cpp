//Search elment in rotated sorted array
#include<iostream>
#include<conio.h>
using namespace std;

int Findmin(int a[],int s)
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
int BinarySearch(int a[],int start,int end,int n)
{	
	int mid;
	while(start<=end)
	{
		mid = start + ((end-start)/2); //to avoid int overflow
		if(a[mid]==n)
			return mid;
		else if (n>a[mid]) //element on right
			start=mid+1;	
		else
			end=mid-1;//else on left
	}
	return -1;
}
int main()
{
	int arr[20],num,size,start=0;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	
	cout<<"Enter elements "<<endl;
	 for(int i=0;i<size;i++)
	 	cin>>arr[i];
	cout<<"Enter the element to search in array"<<endl;
	cin>>num;	 	
	int min=Findmin(arr,size);
	int left=BinarySearch(arr,start,min-1,num);
	int right=BinarySearch(arr,min,size-1,num);	
	
	if(left>= 0)
		cout<<left;
		
	else if (right>=0)
		cout<<right;
	else
	    cout<<"-1";
	getch();
	return 0;
}

