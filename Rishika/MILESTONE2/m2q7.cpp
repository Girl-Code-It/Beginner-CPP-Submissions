//q7- A student is not allowed to sit in the examination if his attendance is less than 75%.....
#include<iostream>
using namespace std;
int main()
{
	float a,h,p;
	cout<<"number of classes attended- "<<endl;
	cin>>a;
	cout<<"number of classes held- "<<endl;
	cin>>h;
	p=(a/h)*100;
	cout<<"Percentage of classes= "<<p<<endl;
	if(p>=75)
	{
		cout<<"You are allowed to sit in the exam.";
	}else
	{
		cout<<"You are not allowed to sit in the exam.";
	}
	
}
