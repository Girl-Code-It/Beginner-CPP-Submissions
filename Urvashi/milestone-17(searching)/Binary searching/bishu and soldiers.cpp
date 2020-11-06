#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long N, l, h, mid, i;
	cin >> N;
	int pos[N];
	for (i = 0; i < N; i++)
	{
		cin >> pos[i];
	}
	sort(pos, pos + N);
	for (i = 1; i < N; i++)
	{
		pos[i] += pos[i - 1];
	}

	long long nor, pob;
	cin >> nor;
	while (nor--)
	{
		cin >> pob;
		l = 0, h = N - 1;
		while (l <= h)
		{
			mid = l + (h - l) / 2;
			if (pos[mid] == pob)
			{
				if (pos[mid + 1] == pob)
					l = mid + 1;
				else
					break;
			}
			else if (pos[mid] > pob)
				h = mid - 1;
			else
				l = mid + 1;
		}
		cout << (mid + 1) << " " << pos[mid] << endl;
	}
}
