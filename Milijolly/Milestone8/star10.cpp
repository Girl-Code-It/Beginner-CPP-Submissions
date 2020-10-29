//star pattern 10

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{   int num,n,m;
	cout<< "Enter number of rows "<<endl;
	cin>>num;
	n=(num/2)+1;
	m=(2*n)-1;
	for(int i=1;i<=n;i++)
	{ for(int j=1;j<=m;j++)
	   {
	   	 if(j>=n+1-i&&j<=n-1+i)
	   	 cout<<"*";
	   	 else
	   	 cout<<" ";
	   }
	   cout<<endl;
	   
	}
	
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
