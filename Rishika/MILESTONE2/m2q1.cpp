//q1- take values of length and breadth of a rectangle and check whether its a square.
#include<iostream>
using namespace std;
int main()
{
	int l,b;
	cout<<"enter length and breadth of the rectangle- ";
	cin>>l>>b;
	if(l==b)
	{cout<<"This is a square.";
	}else
	{cout<<"This is not a square.";
	}return 0;
}
