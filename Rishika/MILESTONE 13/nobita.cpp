//reverse words of a string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	int m=t+1,sp;
	string s;
	if(s.length()<=100000)
	{char c;
	while(m--)
	{
		getline(cin,s);
		reverse(s.begin(),s.end());
		for(i=0,sp=-1;i<s.length();i++)
		{
			if(s[i]==' ')
			{
				reverse(s.begin()+sp+1,s.begin()+i);
				sp=i;
			}
			if(i==s.length()-1)
			{
				reverse(s.begin()+sp+1,s.end());
			}
		}cout<<s<<endl;
	}
	}
}
