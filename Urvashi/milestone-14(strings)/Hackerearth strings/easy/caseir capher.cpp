#include <bits/stdc++.h>
using namespace std;
int main()
{
	int Q;

	cin >> Q;
	while (Q--)
	{
		bool flag = false;
		int ans = -1;
		string S;
		string T;
		cin >> S >> T;
		for (int i = 0; i < S.size(); i++)
		{
			int diff = (T[i] - S[i] + 26) % 26;
			if (ans == -1)
				ans = diff;
			else if (diff == ans)
				continue;
			else
			{
				flag = true;
				break;
			}
		}
		if (flag)
			cout << "-1" << endl;
		else
			cout << ans << endl;
	}
}
