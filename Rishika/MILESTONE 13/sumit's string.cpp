//sumit's string
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,c;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s.length()<=250){
			c=0;
		for(int i=0;i<s.length();i++)
		{   
		    if(s[i]==s[i+1])
		    {
		    	c=0;
		    	break;
			}else if(s[i+1]-s[i]==-1||s[i+1]-s[i]==1)
			{
				c=c+1;
			}
		}
		if(c==0)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
}
}
