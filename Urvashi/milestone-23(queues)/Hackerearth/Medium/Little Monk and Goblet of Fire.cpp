#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int q, temp, a, b;
	queue<int> q1[5], q2;
	char x;
	cin >> q;
	while (q--)
	{
		cin >> x;
		if (x == 'E')
		{
			cin >> a >> b;
			if (q1[a].empty())
				q2.push(a);
			q1[a].push(b);
		}
		else
		{
			temp = q2.front();
			cout << temp << " " << q1[temp].front() << "\n";
			q1[temp].pop();
			if (q1[temp].empty())
				q2.pop();
		}
	}
}
