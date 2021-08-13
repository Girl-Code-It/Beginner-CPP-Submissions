//program in C for binary search using recursion

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[50],int start, int end,int val)
{
	if(start<=end)
	{
		int mid = start + ((end-start)/2);
		
		if(arr[mid]==val)
			return mid;
			
		else if(arr[mid]<val)
			return binarySearch(arr,mid+1,end,val);
		
		else
			return binarySearch(arr,start,mid-1,val);
	}
	
	return -1;
}

int main()
{
	int n,a[50],val;
	cin>>n;
	cout<<"Enter array "<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter value to search "<<endl;
	cin>>val;
    cout<<"Value found at index "<<binarySearch(a,0,n-1,val);
	
}
