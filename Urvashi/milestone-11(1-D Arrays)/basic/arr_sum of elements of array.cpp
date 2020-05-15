#include<iostream>
using namespace std;
int sum(int a[], int n);
int main()
{
	int a[10], i,n;
	cout<<"enter the size of the array:";
	cin>>n;
	cout<<"enter the elements of the array:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	} 
    cout<<"sum of all the elements of the array is:"<<sum(a, n);	
}
 sum(int a[100],int n )
 {
 	if(n<=0)
 	return 0;
 	return (sum(a,n-1) +a[n-1]);
 }
