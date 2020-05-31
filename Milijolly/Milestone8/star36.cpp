//star 36
//star36
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{  int n,k=0,p;
   cout<<"enter the number of rows "<<endl;
   cin>>n;
   for(int i=1;i<=n;i++)
   {  p=0;
      for(int j=1;j<=i;j++)
      {
      	cout<<p;
      	p=p+i-1;
      
      	
      }
      
      cout<<endl;
   }
   
   getch();
   return 0;
   
}
