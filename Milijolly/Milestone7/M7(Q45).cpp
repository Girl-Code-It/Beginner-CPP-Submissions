//Write a C++ program to convert Decimal to Binary number system

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 
#include<math.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{  int num,temp,digit,place=1,sum=0;
	
	cout<<"Enter the number "<<endl;
    cin>>num;
    
    temp=num;
    
    while(temp >0)
	{ 
	 digit=temp%2;
	 sum=sum+ (digit*place);
	 place=place*10;
	 temp=temp/2;
	}
	cout<<"Binary number is "<<sum;
	getch();
	return 0;
	
}
