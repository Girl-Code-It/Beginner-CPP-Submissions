//Milestone 2
//21.Write a C program to count number of digits in a number.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{int count=0,n;
 cout<<"enter the number"<<endl;
 cin>>n;
  
  while(n!=0)
  {n=n/10;
   count++;}

 	cout<<"the number of digits are  "<<count;
	 getch();
	return 0;
 
}
