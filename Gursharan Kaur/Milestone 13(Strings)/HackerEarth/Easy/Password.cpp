#include<iostream>
#include<cstring>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,d,l;
	cin>>n;
	string s[n];
	for(i=0;i<n;i++)
	{	
        	cin>>s[i];
	}
	string temp; 
    for (i = 0; i < n; i++)
    {   
        temp = s[i];                       
        l = s[i].size();                   
        reverse(s[i].begin(), s[i].end()); 
        for (j = 0; j < n; j++)
        {   
            if (j != i)
            {   
                if (s[i] == s[j]) 
                {   
                    d = l / 2; 
                    cout << s[i].size() << " " << s[j][d];
                    goto end;
                }
            }
        }
    }
	end:;
}	
