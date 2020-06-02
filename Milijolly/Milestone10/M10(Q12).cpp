//Write a C++ program to find maximum and minimum between two numbers using functions.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
using namespace std;

void func(int x,int y)
{ if(x>y)
  {
  cout<<"MAX is "<<x<<endl;
  cout<<"MIN is "<<y; }
  else
  {
  cout<<"MAX is "<<y<<endl;
  cout<<"MIN is "<<x; }
}

int main()
{   int m,n;
    cout<<"enter the two numbers"<<endl;
    cin>>n>>m;
    func(n,m);
	getch();
	return 0;
	
}
