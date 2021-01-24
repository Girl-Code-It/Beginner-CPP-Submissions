#include <bits/stdc++.h>

using namespace std;

int main()
{
	int testCases; cin>>testCases;

	while(testCases-->0)
	{
		int n, k; cin>>n>>k;
		string s, res = ""; cin>>s;

		for(int i = 0; i < n; i++)
		{
			if(isalpha(s[i]))
			{
                if(s[i] <= 'z' && s[i] >= 'a')
				{char ch = (s[i]-'a' + k)%26;
				res += (char)(ch+'a');}
                else if(s[i] <= 'Z' && s[i] >= 'A')
				{char ch = (s[i]-'A' + k)%26;
				res += (char)(ch+'A');}
			}
			else if(isdigit(s[i]))
			{
				char ch = (s[i]-'0' + k)%10;
				res += (char)(ch+'0');
			}
			else res += s[i];
		}
		cout<<res<<endl;
	}
	return 0;
}