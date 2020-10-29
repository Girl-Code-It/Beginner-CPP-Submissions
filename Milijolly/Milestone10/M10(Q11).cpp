//Write a C++ program to find diameter, circumference and area of circle using functions.

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

void circum(int x)
{ 
  cout<<2*3.14*x<<endl;
}

void area(int x)
{ 
  cout<<3.14*x*x<<endl;
}
void diameter(int x)
{ 
  cout<<2*x<<endl;
}

int main()
{   int r;
    cout<<"enter the radius"<<endl;
    cin>>r;
    cout<<"Diameter is "; diameter(r);
    cout<<"Area is "; area(r);
    cout<<"Circumference is "; circum(r);
	
	getch();
	return 0;
	
}

