//q10- to check whether a letter is in uppercase or lowercase.
#include<iostream>
using namespace std;
int main()
{
	char l;
	cout<<"enter any alphabet.- ";
	cin>>l;
	if(l<'z' && l>'a')
	{cout<<"Letter is in lowercase.";
	}else
	{cout<<"Letter is in uppercase.";
	}
}
