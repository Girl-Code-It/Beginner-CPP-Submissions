//star 24 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{ int n;
    
   cout<<"the number of rows:7 "<<endl;

   
   for(int i=1;i<=7;i++)
   {
   	   for(int j=1;j<=7;j++)
   	   {  
   	        if((i==1||i==7||j==1||j==7)||(i>=3&&i<=5&&j>=3&&j<=5)&&(i==3||i==5||j==3||j==5))
   	         { cout<<"*";
   	         }
   	       	else
			cout<<" ";   
   	   }
   	   cout<<endl;
   }
   
   
   getch();
   return 0;
   
}
