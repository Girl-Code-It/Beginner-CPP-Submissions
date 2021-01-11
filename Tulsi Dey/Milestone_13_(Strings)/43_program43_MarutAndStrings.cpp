#include <bits/stdc++.h>

using namespace std;

void getRes(string s)
{
	int c = 0, upperCase = 0, lowerCase = 0;
	for(int i = 0; i < s.length(); i++)
	if(isalpha(s[i]))
	{
		c++;
		if(isupper(s[i])) upperCase++;
		if(islower(s[i])) lowerCase++;
	}
	else if(s[i] == ' ')
	{
		c = 0;
		break;
	}

	if(c == 0)
	{
		cout<<"Invalid Input"<<endl;
		return;
	}

	cout<<min(upperCase,lowerCase)<<endl;
}
int main()
{
	int testCases; cin>>testCases;

	if(testCases <= 0 || testCases > 10) cout<<"Invalid Test"<<endl;
    else{
	cin.ignore(1,'\n');
	while(testCases-->0)
	{
		string s; getline(cin,s);

		if(s.length() == 0 || s.length() > 100) cout<<"Invalid Input"<<endl;
		else getRes(s);
	}
	}
	return 0;
}