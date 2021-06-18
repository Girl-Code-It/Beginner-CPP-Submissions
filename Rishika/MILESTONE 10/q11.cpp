//Q11- define a program to print the grades acc to marks obtained by students.
#include<iostream>
using namespace std;
gr(int x)
{   
    cout<<"Your grade is - ";
	if(x>=91&&x<=100)
	cout<<"AA";
	if(x>=81&&x<=90)
	cout<<"AB";
	if(x>=71&&x<=80)
	cout<<"BB";
	if(x>=61&&x<=70)
	cout<<"BC";
	if(x>=51&&x<=60)
	cout<<"CD";
	if(x>=41&&x<=50)
	cout<<"DD";
	else if(x<=40)
	cout<<"FAIL";
}int main()
{
	int n;
	cout<<"Enter your marks(out of 100) = ";
	cin>>n;
	gr(n);
}
