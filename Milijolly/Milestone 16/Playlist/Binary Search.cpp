//Binary Search
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
	int result=BinarySearch(arr,size,num);
	
	if(result==-1)	
		cout<<"Element not found "<<endl;
	else
		cout<<"Element found at position "<<result+1<<endl;
		
	getch();
	return 0;
}
