//Write a C++ program to find all prime factors of a number

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{  int i, prod=1,num; 

  cout<<"enter the  number "<<endl;
  cin>>num;
  cout<<"prime factors of "<<num<<" is ";
  
  for(i=1;i<=num;i++)
  {
   if(num%i==0)
   for(int j=2;j<i/2;j++)
    if(i%j==0)
    cout<<j<<" ";
  }
  
  getch();
  return 0;
}
