#include<iostream>
using namespace std;
int main()
{
	char ch,x;
	cout<<"enter the character "<<endl;
	cin>>x;
	for(ch='a';ch<='z';ch++)
	{
		if(x==ch)
		cout<<"lowercase";
	}
	for(char a='A';a<='Z';a++)
	{
		if(x==a)
		cout<<"uppercase";
	}
}
