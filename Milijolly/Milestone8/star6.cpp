//Star pattern 6

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{
  int n,m,k;
	cout<< "Enter number of rows "<<endl;
	cin>>n;
	m=(2*n)-1;
	for(int i=1;i<=n;i++)
	{  k=1;
	  for(int j=1;j<=m;j++)
	   {  	     
	   	
	   	 if(j>=n+1-i&&j<=n-1+i&&k==1)
	   	 {
	   	 cout<<"*";
	   	 k=0;}
	   	 else
	   	 {
	   	 cout<<" ";
	   	 k=1;}
	    
	   }
	   cout<<endl;
	   
	}
	getch();
	return 0;	
}
