#include<iostream>
#include<string.h>
using namespace std;
int func(string s1,int size,int index)
{
	if(index>=size)
	{
		return -1;
	}
	else
	{
		if(isupper(s1[index]))
		{
			return index;
		}
		else
		{
			return func(s1,size,index+1);
		}
	}
}
int main()
{
	string s1;
	cout<<"enter string - "<<endl;
    getline(cin,s1);
	int n=s1.length();
	int x=func(s1,n,0);
	cout<<"capital letter at - "<<x;
}
