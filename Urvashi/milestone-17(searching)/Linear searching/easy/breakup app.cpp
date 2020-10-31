#include <bits/stdc++.h>
#include <string>
#include <ctype.h>
using namespace std;
int main()
{
	int N, nntin = 0, tuntin = 0, count = 0;
	;
	cin >> N;
	while (N--)
	{
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			if (isdigit(s[i]))
			{
				if (s[0] == 'M')
				{
					if (s[i] == '1' && s[i + 1] == '9')
						nntin++;
					else if (s[i] == '2' && s[i + 1] == '0')
						tuntin++;
					else
						count++;
				}
				else if (s[0] == 'G')
				{
					if (s[i] == '1' && s[i + 1] == '9')
						nntin += 2;
					else if (s[i] == '2' && s[i + 1] == '0')
						tuntin += 2;
					else
						count += 2;
				}
			}
			if (nntin < count || tuntin < count)
				cout << " No Date" << endl;
			else
				cout << "Date" << endl;
		}
	}
}
