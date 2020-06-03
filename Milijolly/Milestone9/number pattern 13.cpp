//number pattern 13

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{  int n,k,m;
   cout<<"enter the number of rows  ";
   cin>>n;
    
   for(int i=n;i>=1;i--)
   {  if(i%2!=0)
       k=1;
      else 
       k=i;
      for(int j=1;j<=i;j++)
      { 
      cout<<k;
      if(i%2!=0)
       k++;
      else 
       k--;
      }
      
      cout<<endl;
   }
   		
	getch();
	return 0;
	
}
