#include<iostream>
#include<string.h>
using namespace std;
void print(string s,int index)
{
	if(index>s.size())
	{
		return;
	}
	print(s,index+1);
	cout<<s[index];
}
int main()
{
	string s;
	cout<<"enter string"<<endl;
	cin>>s;
	print(s,0);
	
}
