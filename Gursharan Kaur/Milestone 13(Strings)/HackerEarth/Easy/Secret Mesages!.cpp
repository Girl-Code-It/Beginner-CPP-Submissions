#include<iostream>
#include<cstring>
using namespace std;
int main()
{	
	int t,temp;
	long long n,k;
	cin>>t;
	while(t--)
	{	
		cin>>n>>k;
		string s;
		cin>>s;
		long long a;
		for (unsigned i = 0; i < s.size(); i++)
		{
			if (islower(s[i]))
			{	
				a = k%26;
				temp = (int)s[i] + a;
				if (temp <= 122)
				{
					cout << (char)temp;
				}
				else
				{
					cout << (char)(temp - 26);
				}
			}
			else if (isupper(s[i]))
			{	
				a=k%26;
				temp = (int)s[i] + a;
				if (temp <= 90)
				{
					cout << (char)temp;
				}
				else
				{
					cout << (char)(temp - 26);
				}
			}
			else if (isdigit(s[i]))
			{
				a = k % 10;
				temp = (int)s[i] + a;
				if (temp <= 57)
				{
					cout << (char)temp;
				}
				else
				{
					cout << (char)(temp - 10);
				}
			}
			else
			{
				cout << s[i];
			}
		}	
		cout<<"\n";
	}	
}