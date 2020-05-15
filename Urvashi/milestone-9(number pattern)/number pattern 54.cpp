#include<iostream>
using namespace std;
int main()
{
	int i,  num, firstdigit;
	cout<<"enter any number:";
	cin>>num;
	while(num>=10)
	{   num%=10;
		firstdigit=num;
	    num/=10;
		while(num!=0)
	{
			cout<<num;
			
		}
	}
}
