//Write a C++ program to print Fibonacci series up to n terms.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>
using namespace std;

int main()
{ int num;
 cout<<"enter number of terms"<<endl;
 cin>>num;
 int n1=0,n2=1,n3=0;
 for(int i=0;i<num;i++)
 {
 cout<<n3<<" ";
 n1=n2;
 n2=n3;
 n3=n1+n2;
 }
	
   getch();
	return 0;
}
