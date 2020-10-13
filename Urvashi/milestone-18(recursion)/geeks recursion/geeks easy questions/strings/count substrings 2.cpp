#include <iostream>
#include <string.h>
using namespace std;
int countsubstring(char *a, int i, int j, int n)
{
	if (n == 1)
		return 1;
	if (n <= 0)
		return 0;
	int count = countsubstring(a, i + 1, j, n - 1) + countsubstring(a, i, j - 1, n - 1) + countsubstring(a, i + 1, j - 1, n - 2);
	if (a[i] == a[j])
		count++;

	return count;
}
int main()
{
	char a[100];
	cin >> a;
	int n = strlen(a);
	countsubstring(a, 0, n - 1, n);
}
