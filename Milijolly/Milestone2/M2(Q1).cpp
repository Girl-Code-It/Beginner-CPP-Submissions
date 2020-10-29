//Milestone 2
//1.Take values of length and breadth of a rectangle from user and check if it is square or not. 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{   int num,l,b;
	cout<< "Enter value of length"<<endl;
	cin>>l;
	cout<< "Enter value of breadth"<<endl;
	cin>>b;
	
	if(l==b)
	cout<<"It is a square";
	
	else 
	cout<<"It is not a square";
	
    getch();
    return 0;
}

