//Milestone 2
//16.Write a C program to print all ODD numbers between 1 to 100.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{int n,i;
 cout<<"enter the limit"<<endl;
 cin>>n;
 
 for(i=1;i<=n;i=i+2)
  { cout<<i<<" ";
  }
 
 	getch();
	return 0;
 
}
