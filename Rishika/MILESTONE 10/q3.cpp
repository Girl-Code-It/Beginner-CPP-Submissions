//II-Q3-wap to find the cube of a number by defining your own function.
#include<iostream>
using namespace std;
int cube(int);
int main()
{
	int a,cu;
	cout<<"Enter a number to calculate it's cube = "<<endl;
	cin>>a;
	cu=cube(a);
	cout<<"Cube of "<<a<<" is "<<cu;
}int cube(int x)
{
	return(x*x*x);
}
