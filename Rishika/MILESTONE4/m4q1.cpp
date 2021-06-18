//q1- wap to find the power of a number.
#include<iostream>
using namespace std;
int main()
{
	int b,e,power=1,i;
	cout<<"enter the base= "<<endl;
	cin>>b;
	cout<<"enter the exponent= "<<endl;
	cin>>e;
	for(i=1;i<=e;i++)
	{
		power=power*b;
	}
	cout<<b<<" ^ "<<e<<" = "<<power;
	
}
