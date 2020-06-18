// WAP Take values of length and breadth of a rectangle from user and check if it is square or not.

#include <iostream>

using namespace std;

int main()
{

int len{0} , brth{0};

cout<<"Enter the length of rectangle";
cin>> len;
cout<<"Enter the breadth of rectangle ";
cin>> brth;

if(len == brth)
{
	cout<<"Your rectangle is square";
}
else
{
	cout<<"It is not square";
}

return 0;

}
