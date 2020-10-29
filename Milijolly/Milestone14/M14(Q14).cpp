//sumit's string of adjacent characters 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<ctype.h>     //  strcmp, strcmpi, strcpy
#include<conio.h>
#include<stdio.h> 

using namespace std;

int main()
{
	int count,T,len; char S[80],flag=1;
	cout<<"Enter the number of test cases"<<endl;
	cin>>T;
	
	while(T>0)
	{   
		count=0;
		cout<<"Enter the sequence"<<endl;
		cin>>S;
		
		len=strlen(S);
		
		for(int i=0;i< len;i++)
		{
		  	if(i==0)
			{
				if(S[i+1]-S[i]!=1&&S[i+1]-S[i]!=-1)
				flag=0;
				
			}
			else if(i==len-1)
			{
				if(S[i]-S[i-1]!=1&&S[i]-S[i-1]!=-1)
				flag=0;
				
			}
			else
			{
				if(S[i+1]-S[i]!=1&&S[i+1]-S[i]!=-1&&S[i]-S[i-1]!=1&&S[i]-S[i-1]!=-1)
				flag=0;
				
			}

		}
		
		if(flag==1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		
		T--;
	}

	
	getch();
	return 0;
}
