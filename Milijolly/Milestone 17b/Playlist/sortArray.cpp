//Recursion to sort an array
#include<bits/stdc++.h>
using namespace std;

int getmax(int a[],int n)
{
	int ind=0,max=a[0];
	
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			ind =i;
		}
	}
	return ind;
}
void sortArray(int arr[],int n)
{
	int maxindex,temp;
	if(n>1)
	{		
		maxindex= getmax(arr,n);
		
		temp = arr[n-1];
		arr[n-1]=arr[maxindex];
		arr[maxindex] = temp;
		
		sortArray(arr,n-1);
	}
}

int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	sortArray(a,n);
	for(int i=0;i<n;i++)
		cout<<" "<<a[i];
	
}

