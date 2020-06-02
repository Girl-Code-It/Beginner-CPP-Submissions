//Write a program to print the circumference and area of a circle of radius entered by user by defining your own function. 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int func(int x)
{ cout<<"circumference is  "<<2*3.14*x<<endl;
  cout<<"Area is  "<<3.14*x*x<<endl;
  return 0;
}

int main()
{   int r;
    cout<<"enter the radius "<<endl;
    cin>>r;
    func(r);
    cout<<endl;
	getch();
	return 0;
	
}
