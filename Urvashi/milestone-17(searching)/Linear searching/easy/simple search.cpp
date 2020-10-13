#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N, k;
	cin >> N;
	int *p = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> *(p + i);
	}
	cin >> k;
	for (int i = 0; i < N; i++)
	{
		if (*(p + i) == k)
			cout << i << endl;
	}
}
