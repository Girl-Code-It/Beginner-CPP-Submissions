//Define a program to find out whether a given number is even or odd. 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int func(int x)
{ 
  if(x%2==0)
  return 0;
  else
  return 1;
}

int main()
{   int n,m;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"The numbers is ";
    m=func(n);
    if(m==0)
    cout<<"EVEN";
    else
    cout<<"ODD";
	getch();
	return 0;
	
}
