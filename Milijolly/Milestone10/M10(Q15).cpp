//Write a C++ program to find all prime numbers between given interval using functions

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>

using namespace std;


void prime(int n)
{ int count;
 cout<<"prime numbers are "<<endl;
  for(int j=2;j<=n;j++)
   { count=0;
  for(int i=2;i<=j/2;i++)
  {if(j%i==0)
    count++; }
  
  if(count==0)
  cout<<j<<", ";
   }
}

int main()
{   int num ;
    cout<<"enter the number"<<endl;
    cin>>num;
    prime(num); 
    
	getch();
	return 0;
	
}
