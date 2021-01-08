#include <bits/stdc++.h>

using namespace std;
string conv(string a)
{
	a = a.substr(1,a.length());
	return a;
}
int getRes(string a, string b, int n)
{
	for(int i = 0; i < n; i++)
	if(a.substr(0,a.length()) != b.substr(0,a.length()))    a = conv(a);
	else break;
	
	return n - a.length();
}
int main()
{
	int n; cin>>n;
	string a, b; cin>>a>>b;

	cout<<getRes(a,b,n)<<endl;
	
	return 0;
}