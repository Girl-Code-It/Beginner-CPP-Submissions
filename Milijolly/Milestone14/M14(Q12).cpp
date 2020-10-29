//DNA Pride! 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<ctype.h>     //  strcmp, strcmpi, strcpy
#include<conio.h>
#include<stdio.h> 

using namespace std;

int main()
{
	int count=0,T,N; char ch[80];
	cout<<"Enter the number of test cases"<<endl;
	cin>>T;
	
	while(T>0)
	{
		cout<<"Enter the number of bases"<<endl;
		cin>>N;
		
		cout<<"Enter the DNA sequence "<<endl;
		for(int i=0;i<N;i++)
		{
			cin>>ch[i];
		}
		
		for(int i=0;i<N;i++)
		{
			if(ch[i]=='A')
			ch[i]='T';
			
			else if(ch[i]=='T')
			ch[i]='A';
			
			else if(ch[i]=='G')
			ch[i]='C';
			
			else if(ch[i]=='C')
			ch[i]='G';
			
			else if(ch[i]=='U')
			count=1;
			
			else
			{
			cout<<"INVALID INPUT"<<endl;
			break;
		    }
		}
		
		if(count==0)
		{
		 for(int i=0;i<N;i++)
			cout<<ch[i];
		cout<<endl;
	    }
		else
		cout<<"Error RNA nucleobases found! "<<endl;
		
		T--;
	}
	
	getch();
	return 0;
}
