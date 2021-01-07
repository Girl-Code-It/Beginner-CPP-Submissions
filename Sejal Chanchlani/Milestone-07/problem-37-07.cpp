// Program to find ones complement of a number.
#include<iostream>
#define size 6
using namespace std;
int main()
{
	
	char binary[size+1],comp[size+1];
	cout<<"enter"<<size<<" binary digit"<<endl;
	cin>>binary;
	for(int i=0;i<=size;i++)
	{
		if(binary[i]=='0')
		{
			comp[i]='1';
		}
		else if(binary[i]=='1')
		{
			comp[i]='0';
		}
		else
		cout<<"enter valid binary number"<<endl;
	}
	cout<<"binary number- "<<binary<<endl;
	cout<<" compliement number "<<comp<<endl;
}
