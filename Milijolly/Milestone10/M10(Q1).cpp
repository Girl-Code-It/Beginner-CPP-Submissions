//Write a program to print the sum of two numbers entered by user by defining your own function.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int func(int x,int y)
{ return x+y;
}

int main()
{   int m,n;
    cout<<"enter the two numbers"<<endl;
    cin>>n>>m;
    cout<<"Sum of two numbers is "<<func(n,m);
	getch();
	return 0;
	
}
