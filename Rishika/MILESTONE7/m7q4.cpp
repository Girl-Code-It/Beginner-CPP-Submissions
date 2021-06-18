//q4- wap to convert binary to decimal number system.
#include<iostream>
using namespace std;
int main(){
	int decimalnum[]={0,1};
	int decimal=0,bin,i,place=1,temp,n;
	cout<<"Enter a binary number- ";
	cin>>bin;
	temp=bin;
	while(temp!=0)
	{
		n=temp%10;
		for(i=0;i<=2;i++)
		{
			if(decimalnum[i]==n)
			{
				decimal=(i*place)+decimal;
				break;
			}
		}
		place=place*10;
		temp=temp/10;
	}
	cout<<"The binary number is- "<<bin<<endl;
	cout<<"Decimal number is- "<<decimal;
}
