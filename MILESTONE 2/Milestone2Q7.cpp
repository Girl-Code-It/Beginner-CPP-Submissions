// PROGRAM FOR RETURNING ABSOLUTE VAALUE OF A NUMBER


#include<iostream>
using namespace std;


int main()
{
	int a;
	cout<<"Enter any number:";
	cin>>a;

	if(a>0)
		cout<<"The absolute value of number is:"<<a;
	else
		cout<<"The absolute value of number is:"<<-(a);


	return 0;
}
