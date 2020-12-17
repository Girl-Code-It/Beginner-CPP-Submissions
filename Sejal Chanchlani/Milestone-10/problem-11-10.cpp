//problem-11-10
#include<iostream>
using namespace std;
double dia(double r)
{
	return 2*r;
}
double circum(double r)
{
	return 2*3.14*r;
}
double area(double r)
{
	return 3.14*r*r;
}
int main()
{
	double r;
	cout<<"enter radius"<<endl;
	cin>>r;
	cout<<"Diameter of circle is "<<dia(r)<<endl;
	cout<<"Area of cicle is "<<area(r)<<endl;
	cout<<"Circumference of circle is"<<circum(r)<<endl;	
	
}
