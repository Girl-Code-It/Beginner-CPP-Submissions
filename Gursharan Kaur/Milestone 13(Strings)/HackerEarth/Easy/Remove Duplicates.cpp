#include<iostream>
#include<cstring>
using namespace std;
int main()
{	
	char s[10000000];
	long i,j,l;
	cin>>s;
	l=strlen(s);
	for(i=0;i<l;i++)
	{	
		long long k = 0;
        while (s[k] != s[i])
        {   
			k++;
        }
        if (k == i)
        cout<<s[i];
	}
}  
