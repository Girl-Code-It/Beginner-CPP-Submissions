#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	long int sum = 0, count = 0;
	cin >> N;
	int *p = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> *(p + i);
	}

	for (int i = 0; i < s.size(); i++)
	{
		if (*(p + i) >= 0)
		{
			sum += *(p + i);
			count++;
		}
	}
}
if (count != 0)
	cout << sum << " " << count << endl;
else
{
	long int ans = (*p);
	for (int i = 0; i < N; i++)
	{
		ans = max(ans, *(p + i));
		cout << ans << " "
			 << "1" << endl;
	}
}
}
//another method........
#include <iostream>
using namespace std;
int main()
{
	int count = 0;
	long int sum = 0;
	int n, i;
	cin >> n;
	long int arr[n];
	for (i = 0; i < n; i++)
		cin >> arr[i];
	for (i = 0; i < n; i++)
	{
		if (arr[i] >= 0)
		{
			sum = sum + arr[i];
			count++;
		}
	}
	if (count != 0)
		cout << sum << " " << count;
	else
	{
		long int max = arr[0];
		for (i = 0; i < n; i++)
		{
			if (max < arr[i])
				max = arr[i];
		}
		cout << max << " "
			 << "1";
		cout << endl;
	}
}
