//Write a C++ program to find cube of any number using function.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int cube(int x)
{ 
  x=x*x*x;
  return x;
}

int main()
{   int m,n;
    cout<<"enter the two numbers"<<endl;
    cin>>n;
    cout<<"CUBE of numbers is "<<cube(n);
	
	getch();
	return 0;
	
}

