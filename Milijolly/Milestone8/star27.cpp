//star 27

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{
 int n,m,k;char ch;
 cout<<"enter the number of rows"<<endl;
 cin>>n;
 	m=(2*n)-1;
	for(int i=1;i<=n;i++)
	{ k=i;
	 for(int j=1;j<=m;j++)
	   {
	   	 if(j>=n+1-i&&j<=n-1+i)
	   	 {
	   	    cout<<k;	
		    if(j<4)
	   	     k--;
	   	    else
			 k++; }   
	   	 else
	   	 cout<<" ";
	   }
	   cout<<endl;
	   
	}
 
	getch();
	return 0;
}
