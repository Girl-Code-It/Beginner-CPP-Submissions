#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		string s;
		cin >> s;
		int flag = 0;
		char temp;
		for(int j = 0; j < s.size(); j++)
		{
			if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
			{
				if(flag == 0)
				{
					temp = s[j];
					flag = 1;
				}
				else if(flag != 0)
				{
					if(temp < s[j] )
					{
						if(flag == 3)
						{
							cout << "Bad\n";
							flag = 4;
							break;
						}
						else
						{
							temp =s[j];
							flag = 2;
						}
					}
					else if(temp > s[j] )
					{
						if(flag == 2)
						{
							cout << "Bad\n";
							flag = 4;
							break;
						}
						else
						{
							temp =s[j];
							flag = 3;
						}
					}

				}
			}
		}
		if(flag == 2 || flag == 0 || flag == 1)
			cout << "Good\n";
		else if(flag == 3)
			cout << "Worst\n";
	}
}
