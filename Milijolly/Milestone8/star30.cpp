//star 30
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{   int n,k;
	cout<< "Enter number of slashes "<<endl;
	cin>>n;
	
	for(int i=1;i<=3*n;i++)
	{ 
	 for(int j=1;j<=2*n-1;j++)
	  {  
	     if(i<=n)
	     { if(j>=2*n-i)
	         cout<<"*";
	       else
		     cout<<" "; }
		
		else if(i<=2*n)	  
		{  k=0;
		    if(j==n)
		    {cout<<"|";  k=1;}
		     if(j<=i-n-1)
		    {cout<<"*";   k=1;}
		     if(j>=i)
		    {cout<<"*";  k=1;}
			if(k==0)
			 cout<<" ";}
	      
	     else if(i<=3*n)
	     {   if(j<3*n+1-i)
	          cout<<"*";
	          else
	          cout<<" ";
	     }
	  }
	 cout<<endl;
    }
     getch();
    return 0;
}

