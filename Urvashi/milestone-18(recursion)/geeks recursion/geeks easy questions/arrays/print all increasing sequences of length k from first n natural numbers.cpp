#include <iostream>
using namespace std;
void printarray(int *a, int k)
{
	for (int i = 0; i < k; i++)
		cout << a[i] << " ";
	cout << endl;
}
void printsequenceUtil(int *a, int n, int k, int len)
{
	if (len == k)
	{
		printarray(a, k);
		return;
	}
	int i = (len == 0) ? 1 : a[len - 1] + 1;
	len++;
	while (i <= n)
	{
		a[len - 1] = i;
		printsequenceUtil(a, n, k, len);
		i++;
	}
	len--;
}
void printsequence(int n, int k)
{
	int a[k];
	int len = 0;
	printsequenceUtil(a, n, k, len);
}
int main()
{
	int n, k;
	cin >> n;
	cin >> k;
	printsequence(n, k);
}
