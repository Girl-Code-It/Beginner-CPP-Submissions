//Program to find twos complement of a number
#include<iostream>
#define SIZE 6
using namespace std;
int main()
{
	char binary[SIZE+1],ones[SIZE+1],twos[SIZE+1];
	cout<<"enter "<<SIZE<<"binary string"<<endl;
	cin>>binary;
	for(int i=0;i<=SIZE;i++)
	{
		if(binary[i]=='1')
		{
			ones[i]='0';
		}
		else if(binary[i]=='0')
		{
			ones[i]='1';
		}
	}
	char carry='1';
	for(int i=SIZE;i>=0;i--)
	{
		if(ones[i]=='1' && carry=='1')
		{
			twos[i]='0';
			carry='1';
		}
		else if(ones[i]=='0' && carry=='1')
		{
			twos[i]='1';
			carry='0';
		}
		else
		{
			twos[i]=ones[i];
		}
		
	}
	cout<<" Binary string = "<<binary<<endl;
	cout<<" One's compliment = "<<ones<<endl;
	cout<<" Two's compliment = "<<twos<<endl;
	
}
