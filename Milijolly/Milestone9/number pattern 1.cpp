// number pattern 1
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{  int n;
   cout<<"enter the number of rows "<<endl;
   cin>>n;
   for(int i=1;i<=n;i++)
   {  
      for(int j=1;j<=i;j++)
      {
      	cout<<j;
    
      }
      
      cout<<endl;
   }
   		
	getch();
	return 0;
	
}
