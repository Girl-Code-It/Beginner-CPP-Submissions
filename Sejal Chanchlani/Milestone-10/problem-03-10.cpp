//problem-03-10
#include<iostream>
using namespace std;
double area(double r)
{
	return 3.14*r*r;
}
double circ(double r)
{
	return 2*3.14*r;
}
int main()
{
	double r,x,y;
	cout<<"enter radius"<<endl;
	cin>>r;
	x=area(r);
	cout<<"Area = "<<x<<endl;
	y=circ(r);
	cout<<"Circumference = "<<y<<endl;
}
