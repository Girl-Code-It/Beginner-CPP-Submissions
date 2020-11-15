//question: we have to calculate the total no of substrings contaning either & or $ in it.

#include <iostream>
#include <string.h>
using namespace std;
int main() 
{
	char s[1000000];
	int t;
	cin >> t;
	while (t--)
	{
		long long k = 0, ans = 0; //initialising k=0;
		cin >> s;
		for (long long i = 0; i < strlen(s); i++) // traversing string.
		{
			if (s[i] == '$' || s[i] == '&') // finding $ or &
				k = i + 1;					// counting no of sub strings containing & or $.
			ans += k;
		}
		cout << ans << endl;
	}
}
