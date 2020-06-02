#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	
	//turn off means making kth bit 0.
	cout<<(n& ~(1<<(k-1)));
}
