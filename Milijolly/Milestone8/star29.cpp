//star 29
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{   int n;char k=64;
	cout<< "Enter number of rows "<<endl;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{ k=k+2*(i-1)+1;
	 for(int j=1;j<=n;j++)
	  {  if(j>=n+1-i)
	     
	     cout<<k--;
	     
	     else
	     cout<<" ";
	  }
	 cout<<endl;
    }
     getch();
    return 0;
}

