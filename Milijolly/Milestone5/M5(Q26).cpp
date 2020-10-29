//Write a C++ program to check whether a number is Prime number or not

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{int count=0,n;
 cout<<"enter the number"<<endl;
 cin>>n;
 
 for(int i=2;i<=n/2;i++)
 {
   if(n%i==0)
    count++;
  }
  
  if(count==0)
  cout<<"it is a prime number";
  else
  cout<<"not a prime";
  
  getch();
  return 0;
}
   
