//Search in row wise and column wise sorted matrix 
#include<iostream>
#include<conio.h>
using namespace std;

void BinarySearch(int a[][20],int n,int m,int key)
{	
	int i=0;
	int j=m-1;
	while(i>=0&&i<n&&j>=0&&j<m)
	{
		if(a[i][j]==key)
		{
		  cout<<"element found at index "<<i<<" "<<j;
		  break;
		}
		else if (a[i][j]>key) 
			j--;	
		else
			i++;
	}
	if(!(i>=0&&i<n&&j>=0&&j<m))
	cout<<"element not found";
}
int main()
{
	int arr[20][20],num,n,m;
	cout<<"Enter the size of the array"<<endl;
	cin>>n>>m;
	
	cout<<"Enter elements "<<endl;
	 for(int i=0;i<n;i++)
	 	for(int j=0;j<m;j++)
	 		cin>>arr[i][j];
	 	
	cout<<"Enter the element to search in array"<<endl;
	cin>>num;
	BinarySearch(arr,n,m,num);
		
	getch();
	return 0;
}

