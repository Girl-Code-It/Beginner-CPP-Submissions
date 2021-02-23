#include <bits/stdc++.h>

using namespace std;

void isValid(string str)
{
	string s = "";

	for(int i = 0; i < str.length(); i++)
	if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
	s += str[i];

	int n = s.length();

    if(n == 1)
    {
        cout<<"Good"<<endl;
        return;
    }

    string s1 = s, s2 = s;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end(),greater<char>());

    if(s == s1) cout<<"Good"<<endl;
    else if(s == s2) cout<<"Worst"<<endl;
    else cout<<"Bad"<<endl;
}
int main()
{
	int testCases; cin>>testCases;

	while(testCases-->0)
	{
		string s; cin>>s;

		isValid(s);	
	}
	return 0;
}