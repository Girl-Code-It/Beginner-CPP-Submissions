//first occurence
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
	string s,r="";
	cin>>s;
	int l=s.length();
	if(l<=200)
	{
		int a[200]={0};
		string p="";
		for(int i=0;i<l;i++)
		{
			if(a[s[i]]==0){
				a[s[i]]=1;
				r=r+s[i];
			}
		}cout<<r;
	}cout<<endl;
	}
}
