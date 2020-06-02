//star 28
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{
 int n,m,k;
 cout<<"enter the number of rows"<<endl;
 cin>>n;
 	m=(2*n)-1;
	for(int i=1;i<=n;i++)
	{ k=i;
	 for(int j=1;j<=2*i-1;j++)
	 {
	      if(j%2==0)
	   	    {
	   	     cout<<"*";
	   	     k--; }
	   	  else
             cout<<k;
	   }
	   cout<<endl;
	   
	}
 
	getch();
	return 0;
}
