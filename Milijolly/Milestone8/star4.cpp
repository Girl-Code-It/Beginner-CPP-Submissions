//star pattern 4

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{   int n;
	cout<< "Enter number of rows "<<endl;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{ for(int j=n;j>=i;j--)
	   {cout<<"*";
	   }
	   cout<<endl;
	   
	}
	getch();
	return 0;
}
