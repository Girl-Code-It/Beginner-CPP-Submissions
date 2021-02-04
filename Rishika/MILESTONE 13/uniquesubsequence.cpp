//unique subsequence
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,i,n,j,ss,c;
	cin>>t;
	while(t--)
	{   c=0;
		string s;
		cin>>s;
		int n=s.length();
		for(i=0;i<n;i++){
			for(j=i+1;j<=n;j++){
				string a=s.substr(i,j);
				ss=a.length();
				
			}
		}cout<<c<<endl;
	}
}
