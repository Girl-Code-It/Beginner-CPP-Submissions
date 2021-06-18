//first 1 in infinitely binary sorted array
#include<iostream>
#include<conio.h>
using namespace std;

// we find first occurence of key=1 in the array using function below
int BinarySearch(int a[],int start,int end)
{	
	int mid,n=1,res;
	while(start<=end)
	{
		mid = start + ((end-start)/2); //to avoid int overflow
		
		if(a[mid]==n)
		{
			res=mid;
			end=mid-1;
		}
		else if (n>a[mid]) //element will be in right half
			start=mid+1;	
		else
			end=mid-1;		//else in left half
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
 	
	//as array is infinite, we find low and high to perform BS
	int low=0,high=1;
	while(1>arr[high]) 
	{
		low=high;
		high=high*2;	
	}	
	int result=BinarySearch(arr,low,high);
	
	if(result==-1)	
		cout<<"Element not found "<<endl;
	else
		cout<<"First 1 is found at position "<<result+1<<endl;
		
	getch();
	return 0;
}
