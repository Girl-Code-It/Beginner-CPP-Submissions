//program to check if number is primary or not 
#include <bits/stdc++.h>
using namespace std;

bool checkprime(int n,int i)
{
	if(i==1)
		return true;
	
	if(n%i==0)
	return false;
	
	return checkprime(n,i-1);
}

int main()
{
	int n;
	cin>>n;
	//to check prime
	checkprime(n,n/2) ? cout<<"Yes" : cout<<"No";
}
