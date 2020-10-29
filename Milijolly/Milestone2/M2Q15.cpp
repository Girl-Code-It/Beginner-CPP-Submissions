//Milestone 2
//15.Write a C program to print all even numbers between 1 to 100.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{int n;
 cout<<"enter the limit"<<endl;
 cin>>n;
 int i=2;
 while(i!=n)
 {
 	cout<<i<<" ";
 	i=i+2;
 }
 
 	getch();
	return 0;
 
}
