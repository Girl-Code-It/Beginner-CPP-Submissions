#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
	int N, M;
	string a;
	string c;
	cin >> N;
	cin >> a;
	cin >> M;
	cin >> c;
	for (int i = 0; i < 100; i++)
	{
		int count = 0;
		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < M; k++)
			{
				if (i == c[k] - a[j])
				{
					count++;
					break;
				}
			}
		}
		if (count == N)
		{
			cout << i << " ";
			break;
		}
	}
}
