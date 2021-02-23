#include<bits/stdc++.h>
using namespace std;
bool c2(string s)
{
	int i = 0;
    int j = s.length() - 1;
   for(i=0;i<s.length()/2;i++)
    {
    if (s[i] != s[s.length()-i-1])
    return 0;
    }
    return 1;
}
int main()
{
	string s,a;
	cin>>s;
	int count=0,i,j;
	for(i=0;i<s.length();i++)
	{   
		for(j=1;j<=s.length()-i;j++)
		{
			a=s.substr(i,j);
			if(c2(a)==1)
			{
				count++;
			}
		}
	}cout<<count;
}
