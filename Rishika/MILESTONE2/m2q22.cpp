//q22- wap to count the number of digits in a number.
#include<iostream>
using namespace std;
int main()
{
	int n,c;
	cout<<"enter the number= ";
	cin>>n;
	for(c=0;n>0;c++)
	{
		n=n/10;
	}
		cout<<c;
}
