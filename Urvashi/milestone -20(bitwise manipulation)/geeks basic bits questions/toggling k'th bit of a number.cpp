#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	
	//toggling k'th bit means we have to flip the kth bit of the number.
	
	cout<<(n ^ (1<<(k-1)));
}
