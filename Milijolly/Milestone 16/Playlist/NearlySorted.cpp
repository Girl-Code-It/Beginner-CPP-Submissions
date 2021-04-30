//searching in array which is nearly sorted
#include<iostream>
#include<conio.h>
using namespace std;

int BinarySearch(int a[],int s,int n)
{	
	int start=0;
	int end=s-1;
	int mid;
	while(start<=end)
	{
		mid = start + ((end-start)/2); //to avoid int overflow
		
		if(a[mid]==n)
			return mid;
			
		else if (a[mid-1]==n && mid-1>=start) //check if element is present at mid-1 position
		    return mid-1;
		    
		else if (a[mid+1]==n && mid+1<=end)//check if element is present at mid+1 position
		    return mid+1;
		    
		else if (n>a[mid]) //element search on right half
			start=mid+2;	
		else
			end=mid-2;//else on left half
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
	int result=BinarySearch(arr,size,num);
	
	if(result==-1)	
		cout<<"Element not found "<<endl;
	else
		cout<<"Element found at position "<<result+1<<endl;
		
	getch();
	return 0;
}
