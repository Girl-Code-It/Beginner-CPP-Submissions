//q7-wap to check if a number is palindrome or not.
#include<iostream>
using namespace std;
int main()
{
	int n,num,rev;
	cout<<"enter anumber= ";
	cin>>n;
	num=n;
	while(n!=0)
	{
		rev=(rev*10)+(n%10);
		n=n/10;
	}
	if(rev==num)
	{
		cout<<"Palindrome.";
	}else
	{
		cout<<"Not a palindrome.";
	}
}
