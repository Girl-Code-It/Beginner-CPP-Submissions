#include <bits/stdc++.h>
#include <string.h>
#include <stdio.h>
using namespace std;

struct task
{
	char name[10];
	int freq;
};

int compare(const void *a, const void *b)
{
	struct task x = *(struct task *)a;
	struct task y = *(struct task *)b;
	if (x.freq > y.freq)
		return 1;
	else if (strcmp(x.name, y.name) > 0 && x.freq == y.freq)
		return 1;
	return 0;
}
int main()
{

	struct task t[10000];
	int q, n;
	cin >> q;
	while (q--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> t[i].name;
			t[i].freq = 1;
		}
		qsort(t, n, sizeof(struct task), compare);
		int j = 0;
		for (int i = 1; i < n; i++)
		{
			if (strcmp(t[i].name, t[i - 1].name) == 0)
			{
				t[j].freq++;
				t[i].freq = 0;
			}
			else
			{
				j = i;
			}
		}
		qsort(t, n, sizeof(struct task), compare);
		for (int i = 0; i < n; i++)
		{
			if (t[i].freq != 0)
				cout << t[i].freq << " " << t[i].name << endl;
		}
	}
}
