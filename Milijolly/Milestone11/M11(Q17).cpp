//Input any number. Find the sum of the digits of the number using a recursive function. 
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;

int func(int n)
{ int sum;
  sum=n%10; 
  
  if(n==0)
  return 0;
  else
  return sum+=func(n/10);
}



int main()
{  
  int num;
  cout<<"enter the number"<<endl;
  cin>>num;
  
  cout<<"sum of digits "<<func(num);
  
  getch();
  return 0;
	
}
