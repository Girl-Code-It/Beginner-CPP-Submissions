//number pattern 17

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{  int n,m;
   cout<<"enter the number of rows  ";
   cin>>n;
    
   for(int i=1;i<=n;i++)
   {   if(i%2==0)
        m=2;
        else
        m=1;
        
      for(int j=1;j<=i;j++)
      {  
         cout<<m;  
          m=m+2;
      }
      cout<<endl;
   }
   		
	getch();
	return 0;
	
}
