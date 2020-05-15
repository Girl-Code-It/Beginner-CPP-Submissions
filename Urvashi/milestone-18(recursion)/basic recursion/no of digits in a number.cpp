#include<iostream>
using namespace std;
int count=0;
int no_of_digits(int n)
{
	if(n==0)
	return 0;
	count++;
	no_of_digits(n/10);
}
    int main()
{
	int num;
	cin>>num;
    no_of_digits(num);
    cout<<count;
}
