#include <bits/stdc++.h>

using namespace std;

bool isPalin(string str)
{
	string res = str.substr(0,str.length());
	reverse(str.begin(), str.end());

	if(str == res) return true;
	else return false;
}
bool isValid(string s)
{
	for(int i = 0; i < s.length(); i++)
	if(s[i] != '0' && s[i] != '1' && s[i] != '8')
	return false;

	return true;
}
int main()
{
	int testCases; cin>>testCases;

	while(testCases-->0)
	{
		string s; cin>>s;

		if (isValid(s) && isPalin(s)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}
	return 0;
}