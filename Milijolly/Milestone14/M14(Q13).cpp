//VowelPhobia 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<ctype.h>     //  strcmp, strcmpi, strcpy
#include<conio.h>
#include<stdio.h> 

using namespace std;

int main()
{
	int count,T,len; char S[80];
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
			if(islower(S[i]))
			{
				if(S[i]=='a'||S[i]=='i'||S[i]=='e'||S[i]=='o'||S[i]=='u')
				count++;
			}

		}
		
		cout<<"No of vowels are "<<count<<endl;
		T--;
	}

	
	getch();
	return 0;
}
