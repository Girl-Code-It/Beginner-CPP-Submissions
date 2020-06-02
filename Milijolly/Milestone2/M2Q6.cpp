//Milestone 2
//6.Take input of age of 3 people by user and determine oldest and youngest among them. 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


int main()
{   
    int a1,a2,a3;
	cout<< "Enter ages of 3 people"<<endl;
	cin>>a1;
	cin>>a2;
	cin>>a3;
	
	{
	if(a1>a2&&a1>a3)
	cout<<"oldest is "<<a1<<endl;
	else if(a1<a2&&a1<a3)
	cout<<"least is "<<a1<<endl;}
	
	{
	if(a2>a1&&a2>a3)
	cout<<"oldest is "<<a2<<endl;
	else if(a2<a1&&a2<a3)
	cout<<"least is "<<a2<<endl;}
	
	{
	if(a3>a1&&a3>a2)
	cout<<"oldest is "<<a3<<endl;
	else if(a3<a1&&a3<a2)
	cout<<"least is "<<a3<<endl;}
	
	getch();
    return 0;
}

