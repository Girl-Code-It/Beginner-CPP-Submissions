#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void permutations(char *s,int left, int right)
{
	if(left==right)
	{
			cout<<s<<" ";
	}
	else
	{
	for(int i=left;i<=right;i++)
	{
		swap((s[left]),(s[i]));
		permutations(s,left+1,right);
		swap((s[left]),(s[i]));
	}
		sort(s,s+strlen(s));
}

}
int main()
{
	int t;
	char s[10];
	cin>>t;
	while(t--)
	{
		cin>>s;
		int n=strlen(s);
	
		permutations(s,0, n-1);
	}
}
