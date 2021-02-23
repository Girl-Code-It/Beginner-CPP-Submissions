//left rotation 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,count=0;
	char c;
	string s,t;
	cin>>n;
	n=s.length();
	n=t.length();
	cin>>s>>t;
	if(s==t)
	return 0;
	else
	return 1;
	while(1)
	{
	reverse(s.begin(),s.begin()+1);
	reverse(s.begin()+2,s.end());
	reverse(s.begin(),s.end());
	count++;
	}cout<<count;
}
