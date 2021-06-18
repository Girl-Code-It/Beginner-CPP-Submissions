#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	char s[100];
	cin>>t;
	while(t--)
	{
		cin>>s;
		int i,n=0;
		for(i=0;s[i]!='\0';i++)
		{ 
		  if(s[i]==97||s[i]==101||s[i]==105||s[i]==111||s[i]==117)
		  n++;
		}
		cout<<n<<endl;
	}
}