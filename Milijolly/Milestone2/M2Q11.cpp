//Milestone 2
/*11.Write a program to check whether a entered character is
      lowercase ( a to z ) or uppercase ( A to Z ).  */

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{ char ch;
  cout<<"enter the character"<<endl;
  cin>>ch;
  int n;
  n=ch;
  
   if(n>=65&&n<=90)
	cout<<"UPPERCASE ALPHABET"<<endl;
   
   if(n>=97&&n<=122)
	cout<<"LOWERCASE ALPHABET"<<endl;
	
	getch();
	return 0;	
	
}
