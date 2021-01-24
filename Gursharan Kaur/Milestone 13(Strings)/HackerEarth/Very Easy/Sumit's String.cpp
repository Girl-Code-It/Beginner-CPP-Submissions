#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;

int adjacent(int a, int b)
{	
	if ((a == 122 && b == 97) || (a == 97 && b == 122))
	return 1; //if adjacent then diff in ascii value will be 1 . so return 1.
	else
	return abs(a - b); 
}

int main()
{	
	char s[1000];
	int i, j, x, t;
        cin >> t;
	
	while (t--)
	{	
		cin >> s;
		int k = 0;
		for (int i = 0; s[i + 1] != '\0'; i++) 
		{
			if ((adjacent(s[i], s[i + 1])) != 1) 
				k = 1;
		}
		if (k == 0)
			cout << "YES" << endl; 
		else
			cout << "NO" << endl;
	}
}