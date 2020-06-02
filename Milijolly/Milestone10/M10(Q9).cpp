/*Write a program to print the factorial of a number by defining a function named 'Factorial'.
Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n. */

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int Factorial(int x)
{ int prod=1;
   if(x>1)
  {
   for(int i=1;i<=x;i++)
    prod=prod*i;
    return prod; }
  else
   return 1; 
     
}

int main()
{   int n,m;
    cout<<"Enter the NUMBER "<<endl;
    cin>>n;
     cout<<"Factorial is "<<Factorial(n);
    
	getch();
	return 0;
	
}


