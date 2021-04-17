//count of element in sorted array 

#include<iostream>
#include<conio.h>
using namespace std;

int LastOcc(int a[],int s,int n)
{	
	int start=0;
	int end=s-1;
	int mid,last=0;
	while(start<=end)
	{
		mid = start + ((end-start)/2); //to avoid int overflow
		if(a[mid]==n)
		{	last=mid;
			start=mid+1;
		}
		else if (n>a[mid]) //element on right
			start=mid+1;	
		else
			end=mid-1;//else on left
	}
	
	return last;
}
int FirstOcc(int a[],int s,int n)
{	
	int start=0;
	int end=s-1;
	int mid,first=0;
	while(start<=end)
	{
		mid = start + ((end-start)/2); //to avoid int overflow
		if(a[mid]==n)
		{	first=mid;
			end=mid-1;
		}
		else if (n>a[mid]) //element on right
			start=mid+1;	
		else
			end=mid-1;//else on left
	}
	
	return first;
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
	int last,first;
	last=LastOcc(arr,size,num);
	first=FirstOcc(arr,size,num);
	
	if(last==0 && first==0)
	cout<<"Count of element is 0"<<endl;
	else
	cout<<"Count of element is "<<last-first+1<<endl;
		
	getch();
	return 0;
}
