#include <iostream>
#define ll long long

using namespace std;


int main()
{
	int testCases; cin>>testCases;

	while(testCases-->0)
	{
		string s; cin>>s;
		ll net = 0, c = 0;

		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] == '$' || s[i] == '&')
			{
				net += (s.length()-i)*c;
				net += (s.length()-i);
				c = 0;
			}
			else
			c++;
		}	
		cout<<net<<endl;
	}
	return 0;
}