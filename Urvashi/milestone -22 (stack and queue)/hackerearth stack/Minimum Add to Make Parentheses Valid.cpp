#include<bits/stdc++.h>
#include<stack>
#include<string.h>
using namespace std;

bool isPair(char opening , char closing )
{
	if(opening =='(' && closing == ')')return true;
	return false;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string c;
cin>>c;
	stack<char>s;
	int count=0;
	for(int i=0;i<c.size();i++)
	{
		if(c[i]=='(')
		s.push(c[i]);
		else if(c[i]==')')
		{
			if(s.empty() || !isPair(s.top(), c[i]))
			count++;
			else
			s.pop();
		}
	}
    cout<< s.size()+count<<endl;
}
