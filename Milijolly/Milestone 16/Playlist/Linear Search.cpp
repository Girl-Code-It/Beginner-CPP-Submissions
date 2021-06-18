//Linear Search 

#include<iostream>
#include<conio.h>

using namespace std;

void LinearSearch(int a[],int n,int s)
{	int temp=-1;
	for(int i=0;i<s;i++)
	{
		if(a[i]==n)
		{
		 cout<<"Element Found at position "<<i+1<<endl;
		 temp=0;	
		}
	}
	if(temp==-1)
	 cout<<"Element Not Found "<<endl;
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
	LinearSearch(arr,num,size);	
	
	getch();
	return 0;
}
