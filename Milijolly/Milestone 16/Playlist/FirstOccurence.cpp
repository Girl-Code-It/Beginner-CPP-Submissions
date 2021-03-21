// first (and last) occurence of elmenet in sorted array
#include<iostream>
#include<conio.h>

using namespace std;

int BinarySearch(int a[],int s,int n)
{	
	int start=0;
	int end=s-1;
	int mid,res=-1;
	while(start<=end)
	{
		mid = start + ((end-start)/2); //to avoid int overflow
		
		if(a[mid]==n) //for first occurence 
		{
			res=mid;  //store the value
			end=mid-1; //check for first occurence on left side 
			/* for last accurence we would search in right side and 
			  thus start=mid+1;*/
		}
		else if (n>a[mid]) //element on right
			start=mid+1;
			
		else
			end=mid-1;//else on left
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
	 	
	cout<<"Enter the element to search in array"<<endl;
	cin>>num;
	int result=BinarySearch(arr,size,num);
	if(result==-1)	
		cout<<"Element not found "<<endl;
	else
		cout<<"First occurence at index "<<result<<endl;
		
	getch();
	return 0;
}
