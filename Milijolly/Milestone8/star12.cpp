//star pattern12
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{ int n,m;
   cout<<"Enter the number of rows"<<endl;
   cin>>n;
   n++;
   m=(2*n)-1;
	
	for(int i=n-1;i>=1;i--)
	{  for(int j=m;j>=1;j--)
	   {
	   	 if(j>=n+1-i&&j<=n-1+i)
	   	 cout<<"*";
	   	 else
	   	 cout<<" ";
	   }
	   cout<<endl;
    }
	
 getch();
 return 0;	
}
