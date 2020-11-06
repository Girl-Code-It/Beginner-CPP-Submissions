#include <iostream>
using namespace std;
void copy(char *a, char *b, int i)
{
	b[i] = a[i];
	if (a[i] == '\0')
		return;
	copy(a, b, i + 1);
}
int main()
{
	char a[100];
	char b[100];
	cin >> a >> b;
	copy(a, b, 0);
	cout << "string b is= " << b;
}
