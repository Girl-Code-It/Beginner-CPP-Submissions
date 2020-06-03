//Milestone 2
//20.Write a C program to print multiplication table of any number.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int main()
{int i,n;
 cout<<"enter the number"<<endl;
 cin>>n;
  
  for(i=1;i<=10;i++)
  { cout<<n<<"X"<<i<<"=";
    cout<<n*i;
    cout<<endl;
  
  }

 	
	 getch();
	return 0;
 
}
