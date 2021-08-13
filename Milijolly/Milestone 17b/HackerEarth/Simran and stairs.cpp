#include <bits/stdc++.h>
using namespace std;

int jump(int n)
{
	if(n == 1 || n==0)
		return 1;
	
	if(n==2)
		return 2;
	
	return jump(n-1) + jump(n-2) +jump(n-3);
}
int main() 
{
	int n,count;
	cin>>n;
	cout<<jump(n)<<endl;
}



