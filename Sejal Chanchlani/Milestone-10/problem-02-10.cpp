//problem-02-10
#include<iostream>
using namespace std;
int product(int a,int b)
{
	return a*b;
}
int main()
{
	int x,y,z;
	cout<<"enter first number"<<endl;
	cin>>x;
		cout<<"enter second number"<<endl;
	cin>>y;
	z=product(x,y);
	cout<<"product of"<<x<<" & "<<y<<"is"<<z<<endl;
	
}
