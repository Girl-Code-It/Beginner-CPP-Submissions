//Milestone 2
//2.Take two int values from user and print greatest among them. 


#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{   int a,b;
	cout<< "Enter 2 numbers"<<endl;
	cin>>a>>b;
	
	if(a>b)
	cout<<"the greatest of the two given numbers is  "<<a;
	
	else
	cout<<"the greatest of the two given numbers is  "<<b;
    
    getch();
    return 0;
}
