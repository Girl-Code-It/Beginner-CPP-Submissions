//Write a C program to find LCM of two numbers.
#include<iostream>
using namespace std;
int main()
{
	long long int num1,num2,max,i,lcm;
	cout<<"enter first number"<<endl;
	cin>>num1;
	cout<<"enter second number"<<endl;
	cin>>num2;
	max=(num1<num2)?num2:num1;
	i=max;
	while(1)
	{
		if(i%num1==0 && i%num2==0)
		{
			lcm=i;
			break;
		}
	}
	cout<<"lcm= "<<lcm<<endl;

}
	
	
	
