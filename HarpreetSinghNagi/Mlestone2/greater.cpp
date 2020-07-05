//Take two int values from user and print greatest among them.


#include <iostream>

using namespace std;

int main ()
{
	int a{0} , b{0};

	cout<<"Enter value for ist number";
	cin>>a;
	cout<<"Enter value for 2nd number";
	cin>>b;

	if(a>b)
	{
	cout<<"ist number is greater i.e = "<<a;
	}
	else
	{
	cout<<"2nd number is greater i.e = "<<b;
	}

	return 0;
}