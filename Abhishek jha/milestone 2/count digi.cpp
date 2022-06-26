#include<iostream>
using namespace std;
int main()
{
	int n,num,a=0;
	cout<<"enter the number"<<endl;
	cin>>n;
	while(n>0)
	{
		num=n/10;
		n=num;
		++a;
	}
	cout<<"the no. of digit are "<<a;
	return 0;
}

