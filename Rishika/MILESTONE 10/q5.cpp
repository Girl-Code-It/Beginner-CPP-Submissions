//I-Q5-wap to print the area and circumference of a circle using functions.
#include<iostream>
using namespace std;
int circ(int);
int ar(int);
int main()
{
	int r,c,a;
	cout<<"Enter the radius = ";
	cin>>r;
	c=circ(r);
	a=ar(r);
    cout<<"Circumference of the circle is = "<<c<<" units."<<endl;
    cout<<"Area of the circle is = "<<a<<" units."<<endl;
}int circ(int x)
{
	return(2*3.14*x);
}int ar(int x)
{
	return(3.14*x*x);
}
