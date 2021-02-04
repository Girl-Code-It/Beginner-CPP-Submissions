//Q6- wap to read and print elements of an array.
#include<iostream>
using namespace std;
void read(int arr[]);
void print(int arr[]);
int main()
{
	int arr[5];
	read(arr);
	print(arr);
}void read(int array[5])
{   cout<<"Enter the elements in the array :  ";
	for(int i=0;i<5;i++)
	{
		cout<<"Enter a number = ";
		cin>>array[i];
	}
}
void print(int array[5])
{   
    cout<<"Elements of the array are = ";
	for(int i=0;i<5;i++)
	{
		cout<<array[i]<<endl;		
	}
}
