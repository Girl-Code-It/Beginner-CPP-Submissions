#include<iostream>
#include<cstring>
using namespace std;
int main()
{	int i,T,l;
  	char S[100];
  	cin>>T;
  	while(T--)
  	{
		int n=0;
		cin>>S;
		l=strlen(S);
    		for(i = 0;(i < l/2) && (S[i] == S[l-i-1]); i++);
		if(i==l/2)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;			
  	}
  	return 0;
}
