//prac2-function with argument and return value
#include<iostream>
using namespace std;
int sqr(int);
int main()
{
	int no,sq;
	cout<<"enter a number = ";
	cin>>no;
	sq=sqr(no);
	cout<<"square is= "<<sq;
}int sqr(int x)
{
	return(x*x);
}
