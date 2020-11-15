#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	cin >> k;
	int days[k];
	for (int i = 0; i < k; i++)
	{
		cin >> days[i];
	}
	sort(days, days + k);
	int sum = 0, temp, min = 0;
	for (int i = 0; i < k; i++)
	{
		temp = days[i] + k - i;
		if (min < temp)
			min = temp;
	}
	cout << min + 1 << endl;
}
