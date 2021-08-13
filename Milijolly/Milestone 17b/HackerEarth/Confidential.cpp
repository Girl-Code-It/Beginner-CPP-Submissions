#include <bits/stdc++.h>
using namespace std;

void encrypt(char str[],int i, int n)
{
	if(i > n)
		return;

	int mid = (i+n)/2;
	
	cout<<str[mid];

	encrypt(str,i,mid-1); //left substring
	encrypt(str,mid+1,n); //right substring
}
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		char str[n+1];
        cin>>str;
		encrypt(str,0,n-1);
		cout<<endl;
	}
	
}
