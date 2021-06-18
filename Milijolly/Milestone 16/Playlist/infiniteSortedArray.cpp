// position of an element in infinite sorted array
#include<iostream>
#include<conio.h>
using namespace std;

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
	int arr[20],num,size;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	
	cout<<"Enter elements "<<endl;
	 for(int i=0;i<size;i++)
	 	cin>>arr[i];
	
	cout<<"Enter the element to search in array"<<endl;
	cin>>num; 	
	int low=0,high=1;
	while(num>arr[high]) 
	{
		low=high;
		high=high*2;	
	}	
	int result=BinarySearch(arr,low,high,num);
	
	if(result==-1)	
		cout<<"Element not found "<<endl;
	else
		cout<<"Element found at position "<<result+1<<endl;
		
	getch();
	return 0;
}
