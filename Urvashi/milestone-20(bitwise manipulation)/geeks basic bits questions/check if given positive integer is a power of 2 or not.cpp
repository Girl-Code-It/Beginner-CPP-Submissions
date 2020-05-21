#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	// this statement unsets the rightmost setbit of number and if a no is power of 2 then its having only one setbit in it .if this statement retruns 0 
	//then number had only one setbit which is now 0 so its a power of 2.
	
	((n& (n-1)))? cout<<"NO\n":cout<<"YES\n";	
}
