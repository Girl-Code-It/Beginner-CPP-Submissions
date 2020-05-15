#include<iostream>
using namespace std;
float circumference(float radius)
{ float circumference;
	circumference=6.28*radius;
	return(circumference);
}
float area(float radius)
{ float area;
	area=3.14*radius*radius;
	return(area);
}
int main()
{   int radius;

	cout<<"enter radius:"<<endl;
	cin>>radius;
	cout<<"circumference of circle having radius"<<radius<<"is="<<circumference(radius)<<endl;
	cout<<"area of circle having radius"<<radius<<"is="<<area(radius)<<endl;
}
