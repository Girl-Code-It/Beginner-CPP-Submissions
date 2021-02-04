//wap to write the ones complement of a binary number.
#include<iostream>
#define sz 5
using namespace std;
int main()
{
	int i,error=0;
	char bin[sz+1],onescomp[sz+1];
	cout<<"Enter a "<<sz<<" sized binary number =";
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
			cout<<"Invalid input. ";
			error=1;
			break;
		}
	}
	onescomp[sz]='\0';
	if(error==0)
	{
		cout<<"One's complement of "<<bin<<" is = "<<onescomp;
	}
}
