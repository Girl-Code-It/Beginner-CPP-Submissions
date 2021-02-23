#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	int testCases; cin>>testCases;
    cin.ignore(1,'\n');
	while(testCases-->0)
	{
		string s;
		getline(cin,s);
		s += " ";
		string res = "", b = "";
		for(ll i = 0; i < s.length(); i++)
		{
			if(s[i] != ' ')
			b += s[i];
			else
			{
				res = b + " " + res;
				b = "";
			}
		}

        if(res[0] == ' ') res = res.substr(1,res.length());
        if(res[res.length()-1] == ' ') res = res.substr(0,res.length()-1);
		cout<<res<<endl;
	}
	return 0;
} 