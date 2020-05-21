#include<bits/stdc++.h>
using namespace std;
int main()
{
	
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
cin>>s;
stack<char>s1,s2;
for(int i=0;i<s.length();i++)
{
	
if(s1.empty())
s1.push(s[i]);

else
{

if(s1.top()==s[i])
s1.pop();

else
s1.push(s[i]);
}
}
while(!s1.empty())
{
s2.push(s1.top());
s1.pop();
}
if(s2.empty())
cout<<"Empty String";
else
{
while(!s2.empty())
{
cout<<s2.top();
s2.pop();
}
}
}
