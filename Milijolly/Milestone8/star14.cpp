//star pattern 14

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{   int n,m;
	cout<< "Enter number of rows "<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{ m=n-i;
	 for(int j=n;j>=i;j--)
	   {cout<<m;
	    m--;
	   }
	   cout<<endl;

	   
	}
	getch();
	return 0;
}
