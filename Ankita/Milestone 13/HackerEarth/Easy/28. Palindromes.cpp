#include <bits/stdc++.h>
using namespace std;
int main ()
{
		string s;
		cin >> s;
		string temp = s;
		int flag = 0, lenght = s.size();
		reverse(s.begin(), s.end());
		if(temp != s)
		{
			cout << lenght<< "\n";
			flag = -1;
		}
	if (flag == 0)
	{
		for (int i = 0; i < s.size()-1; i++)
		{
			if(s[i] != s[i+1])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			cout << "0\n";
		else
			cout << lenght-1 << "\n";
	}
}
