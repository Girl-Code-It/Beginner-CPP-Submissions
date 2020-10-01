#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		string s, temp;
		cin >> s;
		temp = s;
		int flag = 1;
		for(int j = 0; j < s.size(); j++)
		{
			if(s[j] != '1' && s[j] != '0' && s[j] != '8')
			{
				flag = 0;
				break;
			}
		}
		reverse(s.begin(), s.end());
		if(temp == s && flag == 1 )
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
