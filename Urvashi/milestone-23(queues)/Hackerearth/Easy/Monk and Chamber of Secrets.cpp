#include <iostream>
#include <queue>

using namespace std;

class spider
{
public:
	int pow;
	int pos;
};

int main()
{
	std::cin.sync_with_stdio(false);
	queue<spider> q1, q2;

	int n, x, max, flag;
	cin >> n >> x;
	spider t, s;

	for (int i = 0; i < n; i++)
	{
		cin >> s.pow;
		s.pos = i;

		q1.push(s);
	}

	for (int i = 0; i < x; i++)
	{
		max = 0;
		for (int j = 0; j < x; j++)
		{
			if (q1.empty())
				break;

			t = q1.front();
			q2.push(t);

			if (t.pow > max)
				max = t.pow;

			q1.pop();
		}

		flag = 0;

		for (int j = 0; j < x; j++)
		{
			if (q2.empty())
				break;

			t = q2.front();
			if (t.pow == max && flag == 0)
			{
				cout << t.pos << " ";
				flag = 1;
			}
			else
			{
				t.pow = ((t.pow - 1) < 0) ? 0 : (t.pow - 1);
				q1.push(t);
			}
			q2.pop();
		}
	}
}
