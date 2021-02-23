//Conversion
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	t=t+1;
	while(t--){
		string s;
	    getline(cin,s);
		for(i=0;i<s.length();i++)
		{
			if(s[i]>=97&&s[i]<=122)
			{
				cout<<s[i]-96;
			}else if(s[i]>=65&&s[i]<=90)
			{
				cout<<s[i]-64;
			}else if(s[i]==' ')
			{
				cout<<'$';
			}
		}cout<<endl;
	}
}
