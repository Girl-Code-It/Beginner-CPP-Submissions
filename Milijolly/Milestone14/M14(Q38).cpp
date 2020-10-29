//Sorted String
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; 
	cin >>t;
	while(t--)
	{	
	    char s[100];
		cin>>s;
		char c[26]={0};

		for(int i=0;i<strlen(s);i++)
		c[s[i]-97]++;
		
		for(int i=1; i<101; i++)
        {
            for(int j=0; j<26; j++)
            {
                if(c[j] == i)
                {
                    while(c[j]--)
                    {
                        cout<<char(97+j);
                    }
                }
            }
		}
		cout<<endl;
	}										
}
