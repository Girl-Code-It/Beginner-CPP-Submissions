//Milestone 2
//7.Write a program to print absolute vlaue of a number entered by user. 


#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{ int a;
	cout<< "Enter a number"<<endl;
	cin>>a;
	
	if(a<0)
	a=a*(-1);
	
	cout<<"the absolute value is"<<a;
	
	getch();
	return 0;
}
