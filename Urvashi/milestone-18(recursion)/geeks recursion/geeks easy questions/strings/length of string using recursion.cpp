#include <iostream>
using namespace std;
int length(char *s, int index)
{
	if (s[index] == '\0')
		return index;
	return length(s, index + 1);
}
int main()
{
	char s[100];
	cin >> s;
	cout << "length of string is= " << length(s, 0);
}
