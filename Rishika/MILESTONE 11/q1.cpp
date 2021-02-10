//Q1-take 10 integer inputs from the user,store them in an array and print them on screen.
#include<iostream>
using namespace std;
int main()
{
	int i;
	int arr[10];
	cout<<"Enter 10 integers - ";
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<"The 10 integers are - ";
	for(i=0;i<10;i++)
	{
		cout<<arr[i]<<endl;
	}
}
