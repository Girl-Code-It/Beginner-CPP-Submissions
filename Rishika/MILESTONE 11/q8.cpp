//Q8- wap to print the sum of all elements of an array.
#include<iostream>
using namespace std;
void sum(int arr[])
{
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	cout<<sum;
}int main()
{
	int array[5]={22,4,-6,-1,200};
	cout<<"Sum of elements of the array is = ";
	sum(array);
}
