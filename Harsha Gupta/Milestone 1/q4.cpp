#include<iostream>
using namespace std;

int main()
{
	int no;
	cout<<"Enter the no:";
	cin>>no;
	if(no>0)
	  cout<<"Positive";
	else if(no<0)
	  cout<<"Negative";
	else
	  cout<<"Zero";
	return 0;
}
