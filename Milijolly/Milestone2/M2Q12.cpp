//Milestone 2
//12.Write a  program to print all natural numbers from 1 to n

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{int n;
 cout<<"enter the number of natural numbers"<<endl;
 cin>>n;
 int i=1;
 while(i!=n+1)
 {
 	cout<<i<<endl;
 	i++;
 }
 
 	getch();
	return 0;
 
}


