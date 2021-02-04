//prac5-swapping two numbers using call by address(functions)
#include<iostream>
using namespace std;
void swap(int*,int*);
int main()
{
	int a,b;
	cout<<"Enter two numbers to be swapped - ";
	cin>>a>>b;
	swap(&a,&b);
	cout<<"Swapped value of 1st number = "<<a<<endl;
	cout<<"Swapped value of 2nd number = "<<b;
}void swap(int*x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
