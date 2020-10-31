#include <iostream>
#include <string>
using namespace std;
int digitsum(int n)
{
	int count = 0;
	while (n)
	{
		count += n % 10;
		n /= 10;
	}
	return count;
}
int superdigit(int n)
{
	if (n < 10)
		return n;
	else
		return superdigit(digitsum(n));
}
int main()
{
	int k, i = 0;
	long long sum = 0;
	string s;
	cin >> s >> k;
	while (s[i] != '\0')
	{
		sum += (int)(s[i] - '0');
		i++;
	}
	cout << superdigit(sum * k) << endl;
}
