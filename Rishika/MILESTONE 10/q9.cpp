//Q9-define a function to find out if a person is eligible to vote or not.
#include<iostream>
using namespace std;
el(int x)
{
	if(x>=18)
	cout<<"ELIGIBLE TO VOTE.";
	else
	cout<<"NOT ELIGIBLE TO VOTE.";
}int main()
{
	int a;
	cout<<"Enter your age = ";
	cin>>a;
	el(a);
}
