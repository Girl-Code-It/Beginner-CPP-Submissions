#include <iostream>

using namespace std;

int getRes(string s)
{
	int first1 = 0, first2 = 0, second1 = 0, second2 = 0, third1 = 0, third2 = 0;
	for(int i = 0; i < s.length(); i++)
	{
		if(s[i] == '(') first1++;
		else if(s[i] == ')') first2++;
		else if(s[i] == '{') second1++;
		else if(s[i] == '}') second2++;
		else if(s[i] == '[') third1++;
		else if(s[i] == ']') third2++;  
	}
	
	int net = min(first1, first2) + min(second1, second2) + min(third1, third2);
	return 2*net;
}
int main()
{
	int testCases; cin>>testCases;
    while(testCases-->0)
	{
		string s; cin>>s;
		cout<<getRes(s)<<endl;
	}
	return 0;
}