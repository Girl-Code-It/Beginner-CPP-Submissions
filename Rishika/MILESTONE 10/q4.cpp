//II-Q4- wap to print the diameter,circumference and area of a circle using radius entered by user by defining functions.
#include<iostream>
using namespace std;
int dia(int);
int circ(int);
int ar(int);
int main()
{
	int r,d,c,a;
	cout<<"Enter the radius of the circle = ";
	cin>>r;
	d=dia(r);
	c=circ(r);
	a=ar(r);
	cout<<"Diameter of the circle is = "<<d<<" units."<<endl;
	cout<<"Circumference of the circle is = "<<c<<" units."<<endl;
	cout<<"Area of the circle is = "<<a<<" units.";
}int dia(int x)
{
	return(2*x);
}int circ(int x)
{
	return(2*3.14*x);
}int ar(int x)
{
	return(3.14*x*x);
}
