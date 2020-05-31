//star 25

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{ int n=11,m=0,k=1;


	for(int i=1;i<=21;i++)
	{ i<=n?m++:m--;
	  k=m-1;
	for(int j=1;j<=21;j++)
	   {
	   	 if(j>=n+1-m&&j<=n-1+m)
	   	  {
	   	   if(j<n)
		   {
		   cout<<k++%10;
		    }
		   else
		   
		   cout<<k--%10; }
		 else
	   	 cout<<" ";
	   }
	   cout<<endl;
	   
	}
	getch();
	return 0;
}
