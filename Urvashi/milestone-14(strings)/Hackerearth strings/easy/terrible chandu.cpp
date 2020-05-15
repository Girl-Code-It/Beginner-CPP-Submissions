#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char s[30];
  int t;
  cin>>t;
  while(t--)
  {
  	cin>>s;
  	for(int i=strlen(s)-1;i>=0;i--)
  	{
  		cout<<s[i];
	  }
  }
}
