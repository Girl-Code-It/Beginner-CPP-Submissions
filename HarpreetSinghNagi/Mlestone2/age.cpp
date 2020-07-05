/*Take input of age of 3 people by user and determine oldest and youngest among them.*/

#include<iostream>

using namespace std;

int main()
{
	int a,b,c;

	cout<<"Enter the age of all the 3";
	cin>>a>>b>>c;

	cout<<"You entered a="<<a<<"b="<<b<<"c="<<c;

	if(a>b && a>c)
	{

	cout<<"oldest is a";
	if( b>c)
	cout<<"youngest is b";
	else
	cout<<"youngest is c";

	}


	else if(b>a && b>c)
	{

	cout<<"oldest is b";
	if(a>c)
	cout<<"youngest is c";
	else
	cout<<"youngest is a";

	}

	else if(c>a && c>>b);
	{
	cout<<"The oldest is c";
	if(a>b)
	cout<<"youngest is b";
	else 
	cout<<"youngest is a";
	}


    
	return 0;
}