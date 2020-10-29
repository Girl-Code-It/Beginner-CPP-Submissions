//Define a function that returns the product of two numbers entered by user.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int func(int x,int y)
{ return x*y;
}

int main()
{   int m,n;
    cout<<"enter the two numbers"<<endl;
    cin>>n>>m;
    cout<<"Product of two numbers is "<<func(n,m);
	getch();
	return 0;
	
}
