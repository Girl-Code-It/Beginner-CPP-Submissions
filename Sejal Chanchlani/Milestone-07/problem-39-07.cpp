// Program to convert binary into octal.
#include<iostream>
using namespace std;
int main()
{
	int mat[]={0,1,10,11,100,101,110,111};
	int r;
	long long binary,temp,octal=0,place=1;
	cout<<"enter binary - "<<endl;
	cin>>binary;
	temp=binary;
	while(temp!=0)
	{
		r=temp%1000;
		for(int i=0;i<8;i++)
		{
			if(r==mat[i])
			{
				octal=octal+(i*place);
				break;
			}
		}
		place=place*10;
		temp=temp/1000;
	}
	cout<<"Octal number - "<<octal;
}
