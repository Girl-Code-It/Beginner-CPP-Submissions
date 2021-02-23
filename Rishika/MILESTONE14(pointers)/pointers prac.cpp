//pointers practice
#include<iostream>
using namespace std;
int main()
{
	int a=200;
	int *p;
	p=&a;
	cout<<"Value of a="<<a<<endl<<"Vaule of p= "<<*p<<endl<<"p= "<<p<<endl<<"Address of a= "<<&a<<endl;
	char*po;
	po=(char*)p;
	cout<<"Value of po="<<*po<<endl<<"po="<<po;
	return 0;
}
