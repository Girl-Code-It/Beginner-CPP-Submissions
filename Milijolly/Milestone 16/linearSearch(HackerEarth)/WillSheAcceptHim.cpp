#include<bits/stdc++.h>
using namespace std; 

bool isSubSequence(string s1, string s2,int m,int n)
{
	int j=0;
	for(int i=0; i<n;i++)
	{
		if(s1[j]==s2[i])
			j++;
	}
	if(j==m)
	 return true;
	 
	return false;
}

int main() 
{ 
	int t; 
	cin>>t;
	while(t--)
	{
		string s1,s2; cin>>s1>>s2;
		int m = s1.length(); 
		int n = s2.length(); 
		isSubSequence(s1, s2, m, n)? cout << "Love you too ": cout << "We are only friends";
		cout<<endl;
	}
	return 0; 
} 
