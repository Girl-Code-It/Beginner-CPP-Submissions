//Milestone 1
//4.Write a program to check whether number is negative,zero,positive?


#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{   int num;
	cout<< "Enter a number"<<endl;
	cin>>num;
	
	if(num==0)
	cout<<"The number is ZERO";
	
	if(num>0)
	cout<<"The number is POSITIVE";
	
	if(num<0)
	cout<<"The number is NEGATIVE";
	
    getch();
    return 0;
}




