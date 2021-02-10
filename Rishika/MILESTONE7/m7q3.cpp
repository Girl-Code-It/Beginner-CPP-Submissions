//q3- wap to convert binary number to octal number.
#include<iostream>
using namespace std;
int main()
{
	int octalnum[]={0,1,10,11,100,101,110,111};
	int bin,temp,i,n,octal=0,place=1;
	cout<<"enter a binary number- ";
	cin>>bin;
	temp=bin;
	while(temp!=0)
	{
		n=temp%1000;
	 for(i=0;i<=8;i++)
	 {
	 	if(octalnum[i]==n)
	 	{
	 	 octal=(i*place)+octal;
		  break;	
		}
     }	place=place*10;
        temp=temp/1000;     
	}
	cout<<"The binary number is- "<<bin<<endl;
	cout<<"Converted into octal number- "<<octal;
}
