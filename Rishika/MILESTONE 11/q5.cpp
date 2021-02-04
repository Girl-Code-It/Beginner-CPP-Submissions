//Q5- wap to find the sum and product of all the elements in an array.
#include<iostream>
using namespace std;
int main()
{
	int i,prod=1,sum=0;
	int arr[5];
	for(i=0;i<5;i++)
	{
		cout<<"Enter the elements of the array = ";
		cin>>arr[i];
	    prod=prod*arr[i];
	    sum=sum+arr[i];
	}
	cout<<"Product of all elements = "<<prod<<endl;
	cout<<"Sum of all elements = "<<sum;
}
