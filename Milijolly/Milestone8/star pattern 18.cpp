//number pattern 18

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{  int n,m,p=1;
   cout<<"enter the number of rows  ";
   cin>>n;
    
   for(int i=n;i>=1;i--)
   {   m=p;
        
      for(int j=1;j<=i;j++)
      {  
         cout<<m;  
          m=m+2;
      }
      cout<<endl; p=p+2;
   }
   		
	getch();
	return 0;
	
}
