//Count Enemies
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; 
	cin >>t;
	while(t--)
	{	int count=0;
	    string str;
        cin>>str;
		
		for(int i=0;i<str.size();i++) 
		{
			if(str[i]=='X')
            {	
                while(str[i+1]=='O')
                {
                    str[i+1]='n';
                    i++;
                }
            }
		}
		reverse(str.begin(),str.end()); //after reversing the string
		for(int i=0;i<str.size();i++)
		{
			if(str[i]=='X')
            {		
                while(str[i+1]=='O')
                {
                    str[i+1]='n';
                    i++;
                }
            }
		}
		for(int i=0;i<str.size();i++)
		{
			if(str[i]=='O')
			count++;
		}

		cout<<count<<endl;
	}										
}


