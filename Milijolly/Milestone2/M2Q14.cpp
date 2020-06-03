//Milestone 2
//14.Write a program to print all alphabets from a to z.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{ char ch;
  ch='a';
  while(ch!='z')
 {
 	cout<<ch<<" ";
 	ch++;
 }
 
 	getch();
	return 0;
}
