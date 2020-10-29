//Largest Balanced String
#include <iostream>
#include<string>
#include<math.h>
using namespace std;

int main() {
	
	int t,l,c1,c2,c3;
	string s;
	cin>>t;
	while(t--)
	{   c1=0,c2=0,c3=0;
		cin>>s;
		l=s.size();
		for(int i=0;i<l;i++)
		{
		if(s[i]=='(')
		c1++;
		if(s[i]==')')
		c1--;
		if(s[i]=='[')
		c2++;
		if(s[i]==']')
		c2--;
		if(s[i]=='{')
		c3++;
		if(s[i]=='}')
		c3--;

		}
		cout<<l-abs(c1)-abs(c2)-abs(c3)<<endl;
	}
	return 0;
}
