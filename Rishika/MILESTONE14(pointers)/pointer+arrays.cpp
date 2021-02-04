//pointers and arrays
#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	cout<<"a="<<a<<endl; //gives the address of a0
	int*p=a; //i.e. why we dont need to write &a
	cout<<"p="<<p<<endl<<"*p="<<*p<<endl;
	//derefrencing
	cout<<"(p+1)="<<(p+1)<<endl<<"*(p+1)="<<*(p+1)<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"address="<<a+i<<"  "<<"address="<<&a[i]<<endl;
		cout<<"value="<<*(a+i)<<" "<<"value="<<a[i]<<endl;
	}
}
