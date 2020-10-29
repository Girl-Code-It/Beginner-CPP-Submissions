//star pattern 15

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{   int n;
	cout<< "Enter number of rows "<<endl;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
	 for(int j=1;j<=n;j++)
	  {  if(j>=n+1-i)
	     cout<<j;
	     else
	     cout<<" ";
	  }
	 cout<<endl;
    }
    
	for(int i=1;i<=n-1;i++)
	{
	 for(int j=n;j>=1;j--)
	  {  if(j<=n+1-i)
	     cout<<i;
	     else
	     cout<<" ";
	  }
	 cout<<endl;
    }
    
	
	
	
	
	
	
	
	
	
	 getch();
    return 0;
}
