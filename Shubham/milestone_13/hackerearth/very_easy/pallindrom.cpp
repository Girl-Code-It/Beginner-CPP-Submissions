#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int t;

	cin >> t;
	string s, r;
	int start=0, end;
	for(int i=0; i<t; i++)
	{
		cin >> s;
		end = s.length()-1;
		int flag =0;
		for(start =0; start <= end; start++, end--)
		{
			if(s[start] != s[end])
			{
				flag = 1;
				cout << "NO" << endl;
				break;
			}
		}
		if(flag ==0)
			cout << "YES" << endl;


	}
}
