//Next Alphabetical element
#include<iostream>
#include<conio.h>
using namespace std;

char BinarySearch(char a[],int s,char c)
{	
	int start=0;
	int end=s-1;
	int mid; char res;
	while(start<=end)
	{
		mid = start + ((end-start)/2); //to avoid int overflow
		
		if (c>=a[mid])  // move to the right side if element is smaller than given candidate
		{	
			start=mid+1;
		}
		if (c<a[mid])  //element is lesser that means the a[mid] is a candidate for ceil result
		{
			res=a[mid];
			end=mid-1;
		}
		
	}
	return res;
}
int main()
{
	int num,size; char arr[20],ch;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	
	cout<<"Enter elements "<<endl;
	 for(int i=0;i<size;i++)
	 	cin>>arr[i];
	 	
	cout<<"Enter the element to search in array"<<endl;
	cin>>ch;
	char result=BinarySearch(arr,size,ch);
	cout<<"Element greater than given element "<<result<<endl;
		
	getch();
	return 0;
}
