#include<iostream>
using namespace std;
int onedigit(int num)
{
	return (num>=0 &&num<10);
}
bool ispalindrome(int num,int *dupnum)
{
	if(onedigit(num))
	return (num==(*dupnum)%10);
	if (!ispalindrome(num/10,dupnum))
	return false;
	*dupnum/=10;
	return (num%10==(*dupnum)%10);
}
int main()
{
	int n;
	cin>>n;
	if (n<0)
	n=-n;
	int *dupnum=new int(n);
    (ispalindrome(n,dupnum))?cout<<"yes\n":cout<<"no\n";
}
