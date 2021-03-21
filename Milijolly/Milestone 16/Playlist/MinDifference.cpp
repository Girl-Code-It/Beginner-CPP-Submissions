//Minimum difference element in sorted array
#include<iostream>
#include<conio.h>
#include<math.h>
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
	if(abs(n-a[start])<abs(n-a[end]))
		return a[start];
	else
		return a[end];
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
	
	cout<<"Element found with minimum difference "<<result<<endl;
		
	getch();
	return 0;
}
