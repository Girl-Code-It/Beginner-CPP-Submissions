//Milestone 2
//17.Write a C program to find sum of all natural numbers between 1 to n.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{int n,sum;
 cout<<"enter the limit"<<endl;
 cin>>n;
 
  sum=(n*(n+1))/2;
  cout<<sum;
 	getch();
	return 0;
 
}
