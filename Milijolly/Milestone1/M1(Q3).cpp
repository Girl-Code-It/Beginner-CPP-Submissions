//Milestone 1
//3.Write a program to check whether a number is even or odd?


#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{   int num;
	cout<< "Enter a number"<<endl;
	cin>>num;
	
	if(num%2==0)
	cout<<"The number is EVEN";
	
	else
	cout<<"The number is ODD";
	
    getch();
    return 0;
}




