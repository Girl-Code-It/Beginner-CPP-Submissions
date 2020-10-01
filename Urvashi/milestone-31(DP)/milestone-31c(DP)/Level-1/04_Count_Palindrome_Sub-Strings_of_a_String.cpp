// https://practice.geeksforgeeks.org/problems/count-palindrome-sub-strings-of-a-string/0

#include<bits/stdc++.h>
using namespace std;
int substring(string str,int l , int r,int end)
{
	int c=0;
	while(l>=0 && r<end)
	{
		if(str[l]==str[r])
		{
			c++;
		}
		else
		{
			break;
		}
		l--;
		r++;
	}
	return c;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		int len = str.length();
		int i,j;
		int sum=0;
		for(i=0;i<len;i++)
		{
			int val1 = substring(str,i,i, len);
			val1--;
			int val2 = substring(str,i,i+1,len);
 
			sum = sum + val1  + val2;
		}
		cout<<sum<<"\n";
	}
}
