#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	cin>>k;

	for(int i=0;i<n;i++)
	{
		if(k==a[i])
			cout<<i;
	}
	
}


