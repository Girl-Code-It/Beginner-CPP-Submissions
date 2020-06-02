//star 16
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{   int n;
	cout<< "Enter number of rows "<<endl;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{ for(int j=1;j<=n;j++)
	  {
	  	if(i==j||j==n-i)
	  	{ if(j==i)
	  	 cout<<"\\";
	  	  else
	  	  cout<<"/";
	  	}
	
	  	else 
	  	cout<<"*";
	  	
	  }
	  cout<<endl;
	}
	
	getch();
	return 0;
}
