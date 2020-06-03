// Milestone2
/* 4.A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
    Ask user for quantity
    Suppose, one unit will cost 100.
    Judge and print total cost for user. */

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{ int quant,num,ac,tc;
	cout<< "Enter quantity of items purchased"<<endl;
	cin>>quant;
	
	ac=quant*100;
	num=0.1*ac;
	tc=ac-num;
	
	cout<< "The total cost is "<<tc<<endl;
	
	getch();
    return 0;
}
