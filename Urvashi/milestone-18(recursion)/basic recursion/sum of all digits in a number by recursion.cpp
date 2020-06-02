#include<iostream>
using namespace std;
int no_of_digits(int n)
{
	int rem;
	if(n==0)
	return 0;
    else
	return (n%10)+no_of_digits(n/10);
}
    int main()
{
	int num;
	cin>>num;
   cout<< no_of_digits(num);
}
