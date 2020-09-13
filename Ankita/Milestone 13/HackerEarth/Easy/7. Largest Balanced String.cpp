#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main ()
{
	int t, num;
	cin >> t;
	for (int i=0; i<t+1; i++)
	{
		string a;
		getline(cin, a);
		if (i>0)
		{
			num = 0;
			for(int j = 0; j < a.size(); j++)
			{
				for (int k = j+1; k < a.size(); k++)
				{
					if((a[j]=='(' && a[k]==')') || (a[j]==')' && a[k]=='('))
					{
						num += 2;
						a.erase(a.begin()+k);
						break;
					}
					if((a[j]=='{' && a[k]=='}') || (a[j]=='}' && a[k]=='{'))
					{
						num += 2;
						a.erase(a.begin()+k);
						break;
					}
					if((a[j]=='[' && a[k]==']') || (a[j]==']' && a[k]=='['))
					{
						num += 2;
						a.erase(a.begin()+k);
						break;
					}
				}
			}
			cout << num << "\n";
		}
	}
}
