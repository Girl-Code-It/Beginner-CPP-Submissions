//Milestone 2
//13.Write a C program to print all natural numbers in reverse (from n to 1)

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{int n;
 cout<<"enter the number of natural numbers"<<endl;
 cin>>n;
 int i=n;
 while(i!=0)
 {
 	cout<<i<<endl;
 	i--;
 }
 
 	getch();
	return 0;
}
