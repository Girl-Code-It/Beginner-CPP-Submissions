//prac3-function with no argument but return value
#include<iostream>
using namespace std;
int add(void);
int main()
{
	int ans;
	ans=add();
	cout<<"SUM= "<<ans;
}int add(void)
{
	int a,b;
	cout<<"enter two numbers = ";
	cin>>a>>b;
	return(a+b);
}
