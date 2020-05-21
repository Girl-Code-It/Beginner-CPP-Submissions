#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
stack <string> s,s1;
string str;
cin>>str;

while(str.back()!='.')
{
cin>>str;
s.push(str);
}

while(!s.empty())
{
str=s.top();
s1.push(str);
s.pop();
}

if(str[0]=='1')
s1.push("output");
else
s1.push("output:");

while(!s1.empty())
{
cout<<s1.top()<<" ";
s1.pop();
}
}
