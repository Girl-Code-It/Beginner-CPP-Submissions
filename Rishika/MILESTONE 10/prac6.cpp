//prac6-swapping two numbers using call by reference
#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
	int a,b;
	cout<<"Enter two numbers to be swapped = ";
	cin>>a>>b;
	swap(a, b);
	cout<<"First number after being swapped= "<<a<<endl;
	cout<<"Second number after being swapped= "<<b;
}void swap(int& x,int& y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
