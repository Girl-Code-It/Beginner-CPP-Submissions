//star 35
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{  int n,k;
   cout<<"enter the number of rows "<<endl;
   cin>>n;
   
   for(int i=1;i<=n;i++)
   {  k=1;
      for(int j=1;j<=2*n-1;j++)
       { if(j>=n-i+1&&j<=n+i-1)
          {  if(k==1)
		      {cout<<"*";
			  }
			  else
             cout<<" ";
             k=1-k;
          }
       
         else
         cout<<" ";
       }
       cout<<endl;
   }
	
	
	
	getch();
	return 0;
}

