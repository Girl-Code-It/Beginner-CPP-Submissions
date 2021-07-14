//program to find the Hailstone Sequence of a given number upto 1.
#include <bits/stdc++.h>
using namespace std;

void hail(int n)
{
	if(n== 1)
	{
		return;
	}
	
	if(n%2==0)
	{
		cout<<n/2<<" ";
		 return hail(n/2);
	}
	else
	{	cout<<(3*n)+1<<" ";
		return hail((3*n)+1);
	}
}

int main()
{
	int n;
	cout<<"Enter the a number to form hailstorm sequence "<<endl;
	cin>>n;
	cout<<n<<" ";
	hail(n);
}
