#include<iostream>
using namespace std;
int deci_to_bin(int n)
{
	static long bin,rem,fact=1;
	if(n!=0)
    {
    rem=n%2;
    bin+=rem*fact;
    fact*=10;
    deci_to_bin(n/2);
	}
	return bin;
}
int main()
{
	int num;
	cin>>num;
	cout<<deci_to_bin(num);
}
