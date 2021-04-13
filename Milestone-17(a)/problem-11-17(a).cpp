#include<iostream>
using namespace std;

long convert_binary(int n)
{
//	static long bin,rem,fact=1;
	static long bin,rem,fact=1;
cout<<"statcic bin -"<<bin<<endl;
	if(n!=0)
	{
		rem=n%2;
		bin=bin+rem*fact;
		fact=fact*10;
		convert_binary(n/2);
	}
	return bin;
	
}
int main()
{

	int n;
	cout<<"enter decimal number"<<endl;
	cin>>n;
	cout<<"binary number - "<<convert_binary(n);
	
}
