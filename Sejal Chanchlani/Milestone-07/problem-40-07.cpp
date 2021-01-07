// Program to convert binary to decimal number system.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long binary;
	int i=0,rem,sum=0;
	cout<<"Enter binary number - "<<endl;
	cin>>binary;
	while(binary!=0)
	{
		rem=binary%10;
		sum=sum+rem*(pow(2,i));
		i++;
		binary=binary/10;
	}
	cout<<" Decimal number - "<<sum<<endl;
	
}

