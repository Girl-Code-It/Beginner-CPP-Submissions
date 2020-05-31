//star pattern 9

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{
  int n,m;
  char ch;
	cout<< "Enter number of rows "<<endl;
	cin>>n;
	m=(2*n)-1;
	
	for(int i=1;i<=n;i++)
	{  ch='A';
	  for(int j=1;j<=m;j++)
	   {  	     
	   	
	   	 if(j<=n+1-i||j>=n-1+i)
	   	 { cout<<ch;
	   	   if(j<n)
	   	   ch++;
	   	   else
	   	   ch--;
	   	 }
	   	 else
	   	 {
	   	 cout<<" ";
	   	 if(j==n)
	   	 ch--;
	   	 }
	    
	   }
	   cout<<endl;
	   
	}
	getch();
	return 0;	
}
