#include<iostream>
using namespace std;
int evon (int age)	
{
if(age>=18)
cout<<"you are elligible to vote"<<endl;
else
cout<<"you are not elligible to vote"<<endl;
}
int main()
{
	int age;
	cout<<"enter your age:"<<endl;
	cin>>age;
	return evon(age);
}

