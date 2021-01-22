#include <iostream>

using namespace std;

int main()
{
	string s;
	while(getline(cin,s))
	{
		int f = 0;

		for(int i = 0; i < s.length(); i++)
		{

			if(s[i] == '/' && s[i+1] == '/') f = 1;

			if(f == 0)
			{
				if(s[i] == '-' && s[i+1] == '>')
				{
					cout<<'.';
					i++;
				}
				else cout<<s[i];
			}
			else cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}