// number pattern 5
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{  int n;
   cout<<"enter the number of rows  ";
   cin>>n;
    
   for(int i=n;i>=1;i--)
   {  
      for(int j=i;j>=1;j--)
      {
      	cout<<j;
      }
      
      cout<<endl;
   }
   		
	getch();
	return 0;
	
}
