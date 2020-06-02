//Write a C++ program to print all Prime numbers between 1 to n.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{int count=0,n;
 cout<<"enter the number"<<endl;
 cin>>n;
 cout<<"prime numbers are "<<endl;
 
 for(int j=2;j<=n;j++)
 { count=0;
  for(int i=2;i<=j/2;i++)
  {
   if(j%i==0)
    count++;
  }
  if(count==0)
  cout<<j<<", ";
   
 }
 
 getch();
 return 0;
}
 
 
