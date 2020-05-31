//Milestone 1
//2.Write a program to print maximum of two numbers?
 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<string.h>      //  strcmp, strcmpi, strcpy
#include<conio.h> 

using namespace std;


int main()
{   int a,b;
	cout<< "Enter 2 numbers"<<endl;
	cin>>a>>b;
	
	if(a>b)
	cout<<"the largest of the two given numbers is  "<<a;
	
	else
	cout<<"the largest of the two given numbers is  "<<b;
    
	getch();
    return 0;
}




