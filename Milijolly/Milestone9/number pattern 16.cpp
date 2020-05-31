//number pattern 16

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{  int n,m;
   cout<<"enter the number of rows  ";
   cin>>n;
    
   for(int i=1;i<=n;i++)
   { 
      for(int j=i;j>=1;j--)
      {  m=j%2;
         cout<<m;  
        
      }
      cout<<endl;
   }
   		
	getch();
	return 0;
	
}
