//q2- wap to write the two's complement of a binary number.
#include<iostream>
#define sz 5
using namespace std;
int main()
{
	char bin[sz+1], onescomp[sz+1], twoscomp[sz+1];
	int i,error=0,carry=1;
	cout<<"Enter a binary number "<<sz<<" bit sized = ";
	cin>>bin;
	for(i=0;i<sz;i++)
	{
		if(bin[i]=='0')
		{
			onescomp[i]='1';
		}else if(bin[i]=='1')
		{
			onescomp[i]='0';
		}else
		{
			cout<<"Invalid Input.";
			error=1;
			break;
		}
	}
	onescomp[sz]='\0';
	for(i=sz-1;i>=0;i--)
	{
		if(onescomp[i]=='0' && carry==1)
		{
			twoscomp[i]='1';
			carry=0;
		}else if(onescomp[i]=='1' && carry==1)
		{
			twoscomp[i]='0';
		}else
		{
			twoscomp[i]=onescomp[i];
		}
	}
	twoscomp[sz]='\0';
	if(error==0)
	{
		cout<<"BINARY NO. = "<<bin<<endl;
		cout<<"ONE'S COMP. = "<<onescomp<<endl;
		cout<<"TWO'S COMP. = "<<twoscomp;
	}
}
