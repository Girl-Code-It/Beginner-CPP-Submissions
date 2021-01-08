#include <bits/stdc++.h>

using namespace std;

bool isPalin(string str)
{
	string res = str.substr(0,str.length());
	reverse(str.begin(), str.end());

	if(str == res) return true;
	else return false;
}
int main()
{
	string s; cin>>s;
	
	if(!isPalin(s)) cout<<s.length();
	else 
	{
		if(count(s.begin(), s.end(), s[0]) == s.length()) cout<<0<<endl;
		else cout<<s.length() - 1<<endl;
	}
	
	return 0;
}