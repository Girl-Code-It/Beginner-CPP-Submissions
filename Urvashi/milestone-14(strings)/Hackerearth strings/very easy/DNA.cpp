//question : you are having dna nucleobases mixed with some rna .so if u find rna base means 'U' then print
// error rna bases found else change A into T , t into A , C into G and G into C.

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char s[1000000];
	long long t;
	cin >> t;
	while (t--)
	{
		int x = 0, n;
		cin >> n;
		cin >> s;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == 'U') //here we found U so x=1;
				x = 1;
		}
		if (x == 1)											//if x=1
			cout << "Error RNA nucleobases found!" << endl; //printing this error statement.
		else
		{
			for (int i = 0; i < n; i++)
			{
				if (s[i] == 'A')
					cout << "T";
				else if (s[i] == 'T')
					cout << "A";
				else if (s[i] == 'C')
					cout << "G";
				else if (s[i] == 'G')
					cout << "C";
			}
		}
		cout << endl;
	}
}
