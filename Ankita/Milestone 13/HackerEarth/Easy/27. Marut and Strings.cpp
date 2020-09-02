#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin >> t;
	if(t > 10 || t < 1)
		cout << "Invalid Test";
	else
	while(t--)
	{
		string s;
		cin >> s;
		if(s.size() > 100)
		{
			cout << "Invalid Input\n";
			break;
		}
		int lowercase = 0, uppercase = 0;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] <= 122 && s[i] >= 97)
				lowercase++;
			else if(s[i] >= 65 && s[i] <= 90)
				uppercase++;

		}
		if (lowercase == 0 && uppercase ==0)
			cout << "Invalid Input\n";
		else if ((lowercase == 0 && uppercase != 0) || (lowercase != 0 && uppercase == 0))
			cout << "0\n";
		else
		lowercase<uppercase? cout<< lowercase <<"\n": cout << uppercase << "\n";
	}
}
